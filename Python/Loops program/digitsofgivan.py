n=int(input('Enter number:'))
sum=0
while(n>0):
    remainder=n%10
    sum=sum+remainder
    n=n//10
print('Sum of digits of given number:',sum)
