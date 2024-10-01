#4. Functions: Write a program using functions to: 
#b. Print Fibonacci series of ‘n’ terms, using recursion.
#type n=8 0,1,1,1+1=2,2+1=3,3+2=5,5+3=8,8+5=13

print(' To print FIBONACCI SEQUENCE of n terms ')
def fibo(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibo(n-1) + fibo(n-2)
#Driver code
n = eval(input(' Enter n = '))
for i in range(n):
    print(fibo(i))
