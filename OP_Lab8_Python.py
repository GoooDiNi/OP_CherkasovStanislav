from random import randint as rint


def correct_input(txt, var_type):
    while True:
        try:
            return var_type(input(txt))
        except ValueError:
            print('Incorrect input!')
            continue

            
size = correct_input('\nM is an NxN matrix. Define N: ', int)

            
def matrix_init(m):
    for i in range(size):
        m.append([])
        for j in range(size):
            m[i].append(rint(-9, 9))

            
def modify_matrix(m):
    for i in range(size):
        for j in range(size):
            if matrix[i][j] == 0:
                for k in range(size):
                    matrix[k][j] = matrix[k][k]
    
            
def print_matrix(m):
    for line in m:
        for numb in line:
            if numb >= 0:
                print(' ', end='')
            print(numb, end='')
        print()

        
matrix = []        
matrix_init(matrix)

print('\nThe original matrix:')
print_matrix(matrix)

modify_matrix(matrix)

print('\nThe modified matrix:')
print_matrix(matrix)
