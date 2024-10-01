#4. Functions: Write a program using functions to:
#a. Print sum of series, s = 1/1! + 4/2! + 27/3! + ...+ nn/n! .

print(' To print sum of series 1/1! + 4/2! =...+ n**n/n! ')
def series(n):
    sum = 0.0
    for i in range(1,n+1,1):
        j =1
        fact = 1
        while(j<=i):
            fact = fact * j
            j = j +1
        sum = sum + (i**i)/fact
    return sum
#Driver code
n = eval(input(' Enter n = '))
print(' Sum of series is = ',series(n))
     
