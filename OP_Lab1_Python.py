from math import sqrt

a = float(input('a='))
b = float(input('b='))
c = float(input('c='))


def bisector(side_1, side_2, side_3):
    return sqrt(side_1 * side_2 * P * (side_1 + side_2 - side_3)) / (side_1 + side_2)


def three_digits(line):
    return format(line, '.3f')


if a < b + c and b < a + c and c < a + b:
    P = a + b + c
    p = P / 2
    S = sqrt(p * (p - a) * (p - b) * (p - c))
    l1 = three_digits(bisector(a, b, c))
    l2 = three_digits(bisector(b, c, a))
    l3 = three_digits(bisector(c, a, b))
    R = three_digits((a * b * c) / (4 * S))
    r = three_digits((2 * S) / P)
    print('\nThe Bisectors:')
    print('l1 =', l1)
    print('l2 =', l2)
    print('l3 =', l3)
    print('\nThe Radii:')
    print('R =', R)
    print('r =', r)
else:
    print('\nThe triangle does not exist')
    
