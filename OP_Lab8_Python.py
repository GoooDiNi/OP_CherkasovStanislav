from random import randint as rint


def correct_input(txt, var_type):
    while True:
        try:
            return var_type(input(txt))
        except ValueError:
            print('Incorrect input!')
            continue


size = correct_input('\nM is an NxN matrix. Define N: ', int)
matrix = []

print('\nThe original matrix:')
for i in range(size):
    matrix.append([])
    for j in range(size):
        matrix[i].append(rint(-9, 9))
        if matrix[i][j] >= 0:
            print(' ', end='')
        print(matrix[i][j], end='')
    print()

for i in range(size):
    for j in range(size):
        if matrix[i][j] == 0:
            for k in range(size):
                matrix[k][j] = matrix[k][k]

print('\nThe modified matrix:')
for i in matrix:
    for j in i:
        if j >= 0:
            print(' ', end='')
        print(j, end='')
    print()
