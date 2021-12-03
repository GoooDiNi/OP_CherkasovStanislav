from random import randint as ri


def correct_input(txt, var_type):
    while True:
        try:
            return var_type(input(txt))
        except ValueError:
            print('Incorrect input!')
            continue


def print_matrix(matrix):
    for row in matrix:
        print()
        for num in row:
            if num >= 0:
                print(' ', end='')
            print(num, end='')
    print()


n = correct_input('\nM is an NxN matrix. Define N: ', int)
m = []
for i in range(n):
    m.append([])
    for ii in range(n):
        m[i].append(ri(-9, 9))

print_matrix(m)

for m_row in m:
    for num_ind in range(n):
        if m_row[num_ind] == 0:
            for new_ind in range(n):
                m[new_ind][num_ind] = m[new_ind][new_ind]

print_matrix(m)
