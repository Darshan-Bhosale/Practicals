#1. If-Else: Write a program to print the number of days in a month.

year = eval(input('Enter year = '))
month = eval(input('Enter month = '))
if month==2:
    if year % 400 == 0 or ((year % 100 == 0) and (year % 4 == 0)): days = 29
    else:
        days = 28
elif month==1 or month==3 or month==5 or month==7 or month==8 or month==10 or month==12:
        days = 31
else:
    days = 30
print(' Year = ', year)
print(' Month = ', month)
print(' Number of days = ',days)
