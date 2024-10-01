#3. Loops: Write a program using loops to:
#b. Print all prime numbers from 1 to 100.

print(' PRIME NUMBERS between 1 to 100 are: ')
for i in range(1,101):
    j =2
    while(j<i):
        if i%j == 0:
            break;
        j = j +1
        if i == j:
            print(' Prime number = ',i)
