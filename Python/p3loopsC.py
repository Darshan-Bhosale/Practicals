#3. Loops: Write a program using loops to:
#c. To check whether a number is Digit Prime or not.
N = input(' Enter any number = ')
a=int(len(str(N)))
n=int(N)
j=0
while n>0:
    i=2
    while i<n%10:
        if (n%10)%i == 0:
            break
        i=i+1
    if i==n%10:
        j = j +1
    else:
        break
    n = n // 10
# to find sum of digts
n=int(N)
sum=0
while n>0:
    sum = sum + n%10
    n = n // 10
i=2
k=0
while i<sum:
    if sum%i ==0:
        break
    i = i +1
if i == sum:
    if j==2:
        k=2
    else:
        if j==3:
            k=3
        else:
            k=4
            
if (i==sum) or k==2 or k==3 or k==4:
    print(N, ' is a DIGIT PRIME NUMBER')
else:
    print(N, ' is NOT a DIGIT PRIME NUMBER')
