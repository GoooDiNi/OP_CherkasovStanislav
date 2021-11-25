def gcf(a, b, i=0):
    if i == 0:
        i = max(a, b)
    if a % i == 0 and b % i == 0:
        return i
    else:
        return gcf(a, b, i - 1)


def correct_input(txt, var_type):
    while True:
        try:
            return var_type(input(txt))
        except ValueError:
            print('Incorrect input!')
            continue


print('\n')
x = correct_input('Define the first term: ', int)
y = correct_input('Define the second term: ', int)
ans = gcf(x, y)

print('\nThe greatest common factor of', x, 'and', y, 'is', ans)
