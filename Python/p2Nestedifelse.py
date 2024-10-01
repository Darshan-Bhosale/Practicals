#2. Nested if-else: Write a program to print your age in years, months and days.

print(' Enter your date of birth in d - m - y = ')
bd = eval(input('Enter Birth day(d) = '))
bm = eval(input('Enter Birth month(m) = '))
by = eval(input('Enter Birth year(y) = '))
print(' Enter current date d - m - y = ')
cd = eval(input('Enter Current day(d) = '))
cm = eval(input('Enter Current month(m) = '))
cy = eval(input('Enter Current year(y) = '))
if (cd-bd)<0:
    if month==2:
        if year % 400 == 0 or ((year % 100 == 0) and (year % 4 == 0)):
            cd = cd + 29
        else:
            cd = cd + 28
    elif cm==1 or cm==3 or cm==5 or cm==7 or cm==8 or cm==10 or cm==12:
        cd = cd + 31
    else:
        cd = cd + 30
    cm = cm -1
ad = cd - bd
if (cm-bm)<0:
    cm = cm + 12
    cy = cy - 1
am = cm - bm
ay = cy - by
print(' Your current age is = ',ay, ' years', am, ' months and', ad, ' days')
