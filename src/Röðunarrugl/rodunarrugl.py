n = int(input())
values = [(int(x) - 1) for x in input().split()]

used = set()
number_of_connected_component = 0
total_number_of_vertices = 0

for index in range(len(values)):
    value = values[index]

    if (value == index) or (value in used):
        continue

    number_of_vertex_in_cycle = 0
    while value not in used:
        number_of_vertex_in_cycle += 1
        used.add(value)
        value = values[value]
    
    number_of_connected_component += 1
    total_number_of_vertices += number_of_vertex_in_cycle

print(total_number_of_vertices + number_of_connected_component)