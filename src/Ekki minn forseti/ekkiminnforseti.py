"""
Topic: Linked List + Array / Hashmap

The solution has been enhanced to use an array as linked list so that we can
increment the score in O(1) because we know the index to increment. However,
we want to keep track of the candidates who are still in the game. Therefore,
we need to keep track of the previous and next candidate. 
"""
import sys

input = sys.stdin.readline

num_voters, num_candidates = list(map(int, input().split()))
candidates = [input().strip() for _ in range(num_candidates)]
voters = [list(map(int, input().split()))[::-1] for _ in range(num_voters)]

has_left = [True] * num_candidates
for voter in voters: has_left[voter[-1] - 1] = False

candidates_in_round_one = 0
mocked_link_list = [None] * num_candidates
last_seen = None
for i in range(num_candidates):
    if not has_left[i]:
        mocked_link_list[i] = [None, last_seen, 0]
        last_seen = i
        candidates_in_round_one += 1

last_seen = None
for i in range(num_candidates - 1, -1, -1):
    if not has_left[i]:
        mocked_link_list[i][0] = last_seen
        last_seen = i

for i in range(candidates_in_round_one - 1):
    for vote in voters:
        while vote and has_left[vote[-1] - 1]: vote.pop()
        mocked_link_list[vote[-1] - 1][2] += 1
    
    # Now traverse the linked list and keep track of the minimum vote
    ptr = last_seen
    index_of_minimum_score = ptr
    minimum_score = mocked_link_list[ptr][2]

    # Get the person with the minimum score by traversing the whole linked list
    while ptr != None:
        if mocked_link_list[ptr][2] <= minimum_score:
            index_of_minimum_score = ptr
            minimum_score = mocked_link_list[ptr][2]
        mocked_link_list[ptr][2] = 0
        ptr = mocked_link_list[ptr][0]

    has_left[index_of_minimum_score] = True
    if index_of_minimum_score == last_seen:
        last_seen = mocked_link_list[last_seen][0]
        mocked_link_list[index_of_minimum_score] = None # Redundant but delete for real
    else:
        next_element = mocked_link_list[index_of_minimum_score][0]
        previous_element = mocked_link_list[index_of_minimum_score][1]
        mocked_link_list[previous_element][0] = next_element
        if next_element != None: mocked_link_list[next_element][1] = previous_element

print(candidates[last_seen])