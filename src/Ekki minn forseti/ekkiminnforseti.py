import sys
from collections import deque

input = sys.stdin.readline
n, m = list(map(int, input().split()))
names = [input().strip() for _ in range(m)]

voters = [deque(map(int, input().split())) for _ in range(n)]
scores = {}
names_who_left = [True] * (m + 1)

for vote in voters: 
    scores[vote[0]] = 0
    names_who_left[vote[0]] = False

# Simulate the voting system until 1 winner remains.
for _ in range(len(scores) - 1):

    # For each voter, keep popping until you get the first 
    # candidate that has not left. Then increment by 1.
    # NOTE: We are guaranteed to have at least 1 candidate
    for vote in voters:
        while names_who_left[vote[0]]: vote.popleft()
        scores[vote[0]] += 1

    # At the end of the calculation, we get the person with the least votes
    # and kicked him out.
    candidate_with_least_votes = None
    score_of_candidate_with_least_votes = 0

    for candidate in scores:
        if candidate_with_least_votes == None:
            candidate_with_least_votes = candidate
            score_of_candidate_with_least_votes = scores[candidate]
        
        if scores[candidate] < score_of_candidate_with_least_votes:
            candidate_with_least_votes = candidate
            score_of_candidate_with_least_votes = scores[candidate]
        elif scores[candidate] == score_of_candidate_with_least_votes:
            candidate_with_least_votes = max(candidate_with_least_votes, candidate)

        scores[candidate] = 0

    del scores[candidate_with_least_votes]
    names_who_left[candidate_with_least_votes] = True

for candidate in scores: 
    name = names[candidate - 1]
    sys.stdout.write(f"{name}\n")