def sum_recursive(a, d, n):
    n -= 1
    if n == 0:
        res = a
    else:
        res = a + (d * n) + sum_recursive(a, d, n)
    return res


x = int(input('\nDefine the first term: '))
y = int(input('Define the difference: '))
z = int(input('Define number or terms: '))
ans = sum_recursive(x, y, z)

print('\nSum of the first nth terms:', ans)
