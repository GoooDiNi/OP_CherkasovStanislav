print('\nS = (x+1)ⁿ\n--------')
x = float(input('Define x+1: '))
n = int(input('Define n: '))
e = float(input('Define ε: '))
Sum, Add, neg_x, neg_n = [1, 1, False, False]

if x < 0:
    x *= -1
    neg_x = True
x -= 1

if n < 0:
    n *= -1
    neg_n = True

for i in range(round(n * e)):
    i += 1
    Add *= (x * (n - i + 1)) / i
    Sum += Add

if neg_n:
    Sum = 1/Sum

if neg_x and n % 2 != 0:
    Sum *= -1

print('--------\nS =', Sum)
