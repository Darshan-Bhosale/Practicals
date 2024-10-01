#9b. Exception Handling: Write a program that validates name and age as entered by the user to determine whether the person can cast vote or not.

class InvalidAge(Exception):
    def display(self):
        print(' Sorry !!! Age cannot be below 18...You cannot vote.')
class InvalidName(Exception):
    def display(self):
        print(' Please enter a valid name.')
try:
    name = input(' Enter your name = ')
    if len(name) == 0:
        raise InvalidName
    age = int(input(' Enter your age = '))
    if age < 18:
        raise InvalidAge
except InvalidName as N:
    N.display()
except InvalidAge as A:
    A.display()
else:
    print(name, " Congratulations, You can vote...!!!")
