from random import randint as rint


def correct_input(txt, var_type):
    while True:
        try:
            return var_type(input(txt))
        except ValueError:
            print('Incorrect input!')
            continue


def print_matrix(m):
    for line in m:
        for numb in line:
            if numb >= 0:
                print(' ', end='')
            print(numb, end='')
        print()

        
size = correct_input('\nM is an NxN matrix. Define N: ', int)
matrix = []

print('\nThe original matrix:')
for i in range(size):
    matrix.append([])
    for j in range(size):
        matrix[i].append(rint(-9, 9))
print_matrix(matrix)

for i in range(size):
    for j in range(size):
        if matrix[i][j] == 0:
            for k in range(size):
                matrix[k][j] = matrix[k][k]

print('\nThe modified matrix:')
print_matrix(matrix)
