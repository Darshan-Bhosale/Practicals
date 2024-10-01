print('Armstrong number are')
for number in range(1,1000):
    num=((number%10)**3+(number//10%10)**3+(number//100)**3)
    if num==number:
        print(number)
