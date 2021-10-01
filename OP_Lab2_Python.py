Min = int(input('A = '))
B = int(input('B = '))
C = int(input('C = '))

Sum = Min + B + C
if Min > B:
    Min = B
if Min > C:
    Min = C
Sum -= Min

print('\nThe sum of the 2 largest numbers is', Sum)
