#7. Regex: Write a program to validate email, password and mobile numbers.

import re
def solve(s):
    pat = "^[a-zA-Z0-9-_]+@[a-zA-Z0-9]+\.[a-z]{1,3}$"
    if re.match(pat,s):
        return True
    return False
def main():
    passwd = input(' Enter your password = ')
    reg="^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[@$!%*#?&])[A-Za-z\d@$!#%*?&]{6,20}$"
    # compiling regex
    pat = re.compile(reg)
    # searching regex
    mat = re.search(pat, passwd)
    # validating conditions
    if mat:
        print("Password is valid.")
    else:
        print("Password invalid !!")
def isValid(s):
    Pattern = re.compile("(0|91)?[7-9][0-9]{9}")
    return Pattern.match(s)
# Driver Code for validating email id
email = input(' Enter your email id = ')
print(solve(email))
# Driver Code for validating password
if __name__ == '__main__':
    main()
# Driver Code for validating mobile number
Mobile=input('Enter your mobile number = ')
if (isValid(Mobile)):
    print ("Your Mobile Number is a Valid Number")
else :
    print ("Your Mobile Number is an Invalid Number")
