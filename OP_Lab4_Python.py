from math import sin

print('\ny = 1/(sin(x)) + 1/(4sin(x)) + ... + 1/(n²sin(x))\n--------')
x = float(input('Define x: '))
n = int(input('Define n: '))
Sum = 0

for i in range(1, n+1):
    Sum += sin(x) / (i * i)

print('--------\ny =', Sum)
