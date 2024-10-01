def fact(n):
    fact=1
    for i in range(1, n+1):
        fact=fact*i
    return fact
def sum_of_series(n):
    sum=0
    for i in range(1,n+1):
        sum=sum+(i**i)/fact(i)
    return sum
n=int(input("Number to calculate sum of series:"))
op=sum_of_series(n)
print("sum of (n) Series:",op)
