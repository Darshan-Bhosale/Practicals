#3. Loops: Write a program using loops to:
#a. Print sum of 1st ‘n’ natural numbers type n=5 1+2+3+4+5=15

n = eval(input(' Enter n = '))
sum = 0
i= 0
while(i <= n):
    sum = sum + i
    i = i +1
    print('Sum = ',sum)
