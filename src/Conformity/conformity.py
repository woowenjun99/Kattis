from collections import defaultdict

courses = defaultdict(int)
for _ in range(int(input())): courses[tuple(sorted(map(int, input().split())))] += 1
num_of_students_in_popular_combi = max(courses.values())
winners = 0
for value in courses.values():
    if value == num_of_students_in_popular_combi: winners += value
print(winners)