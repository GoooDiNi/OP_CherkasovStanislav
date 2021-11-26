def gcd(a, b):
    while b > 0:
        a, b = b, a % b
    return a


def correct_input(txt, var_type):
    while True:
        try:
            return var_type(input(txt))
        except ValueError:
            print('Incorrect input!')


print('\n')
x = correct_input('Define the first term: ', int)
y = correct_input('Define the second term: ', int)
z = correct_input('Define the third term: ', int)
ans = gcd(z, gcd(abs(x), abs(y)))

print('\nThe greatest common divisor of ', x, ', ', y, ' and ', z, ' is ', ans, sep='')
