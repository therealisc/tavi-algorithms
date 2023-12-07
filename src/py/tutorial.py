
unsorted_vector = [
        22, 23, 22, 44, 3, 1, 4, 5, 98, 8, 22, 23, 22, 44, 3, 1, 4, 5, 98, 8,
        22, 23, 22, 44, 3, 1, 4, 5, 98, 8, 22, 23, 22, 44, 3, 1, 4, 5, 98, 8,
        22, 23, 22, 44, 3, 1, 4, 5, 98, 8, 22, 23, 22, 44, 3, 1, 4, 5, 98, 8,
        22, 23, 22, 44, 3, 1, 4, 5, 98, 8, 22, 23, 22, 44, 3, 1, 4, 5, 98, 8,
        22, 23, 22, 44, 3, 1, 4, 5, 98, 8, 22, 23, 22, 44, 3, 1, 4, 5, 98, 8,
        ]

sorted_vector = [0] * 100

max_number = 0

for i in range(len(unsorted_vector)):
    sorted_vector[unsorted_vector[i]] += 1
    pass

print(sorted_vector)
for i in range(len(sorted_vector)):
    if sorted_vector[i] > 0:
        #print(sorted_vector[i])
        for number in range(sorted_vector[i]):
            #print(number)
            pass

    pass

