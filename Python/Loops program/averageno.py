n=int(input('Enter number:'))
sum=0
for num in range(0,n+1,1):
    sum=sum+num
print('sum of first',n,'number is',sum)
average=sum/n
print('Average of',n,'number is',average)
