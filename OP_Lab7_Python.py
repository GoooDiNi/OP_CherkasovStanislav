from random import uniform as randreal
from math import floor


def correct_input(txt, var_type):
    while True:
        try:
            return var_type(input(txt))
        except ValueError:
            print('Incorrect input!')
            continue


n = correct_input('\nDefine the number of values in array: ', int)
nums = []
for i in range(n):
	nums.append(randreal(-100, 100))
for i in nums:
    if i > 0:
        print(nums.index(i) + 1, ') ', "{0:.10f}".format(i), sep='')
    else:
        ans = 0
        rounding_error = 0
        for j in range(1, 11):
            ans += floor(abs(i) * (10 ** j) % 10)
        if floor(abs(i) * (10 ** (j + 1)) % 10) >= 5:
            rounding_error = 0.1 ** 10
        print(nums.index(i) + 1, ') ', "{0:.10f}".format(i + rounding_error), ' --> ', ans, sep='')
        nums[nums.index(i)] = ans
