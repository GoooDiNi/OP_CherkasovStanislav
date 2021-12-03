from random import uniform as randreal


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
        print(nums.index(i) + 1, ') ', i, sep='')
    else:
        adding = False
        ans = 0
        for ii in str(i):
            if adding:
                ans += int(ii)
            if ii == '.':
                adding = True
        print(nums.index(i) + 1, ') ', i, ' --> ', ans, sep='')
        nums[nums.index(i)] = ans
