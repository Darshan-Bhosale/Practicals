#9a. Exception Handling: Write a number game program. Ask the user to enter a number.

class ValueTooSmallError(Exception):
    def display(self):
        print(' Input value is too small.')
class ValueTooLargeError(Exception):
    def display(self):
        print(' Input value is too large.')

max = 100
while 1:
    try:
        num = int(input(' Enter a number = '))
        if num == max:
            print('Great you have guessed correctly.')
            break
        if num < max:
            raise ValueTooSmallError
        elif num > max:
            raise ValueTooLargeError
    except ValueTooSmallError as s:
        s.display()
    except ValueTooLargeError as l:
        l.display()
