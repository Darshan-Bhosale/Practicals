a= float(input('The a value: '))
b= float(input('The b value: '))
c= float(input('The c value: '))
discriminant = (b**2) - (4*a*c)
if discriminant > 0:
    print('Roots are real and unequal Discriminant value is', discriminant)
elif discriminant == 0:
    print('Roots are real and equal Discriminant value is', discriminant)
elif discriminant < 0:
    print('Otherwise roots are imaginary Discriminant value is',discriminant)
