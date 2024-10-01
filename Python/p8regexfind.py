#8. Regex Pattern finding: Write a program to matching patterns, matching strings, capturing groups and finding and replacing strings.

import re
print(' Example of matching a pattern.')
search_string = input(' Enter a search string = ')
pattern = input(' Enter a pattern to search = ')
match = re.match(pattern, search_string)
if match:
    print("regex matches: ", match.group())
else:
    print('pattern not found')
regex = r"([a-zA-Z]+) (\d+)"
print(' example of Matching a date String')
D = input(' Enter current month followed by a space and current date = ')
if re.search(regex, D):
    match = re.search(regex, D)
    print("Match at index %s, %s" % (match.start(), match.end()))
    print("Full match: %s" % (match.group(0))) 
    print("Month: %s" % (match.group(1)))
    print("Day: %s" % (match.group(2)))
else:
    print("Pattern not Found! ")
print(' This is an example of CAPTURING GROUPS.')
regex = r'([\w\.-]+)@([\w\.-]+)'
str = ('hello darshanbhosale5384@apple.com, mca2021.darshanbhosale@asmedu.org, darshanbhosale7754@gmail.com')
matches = re.findall(regex, str)
print(matches)
for tuple in matches:
    print("Username: ",tuple[0])
    print("Host: ",tuple[1])
print(' This is an example of Finding and Replacing string.')
str = ('hello darshanbhosale5384@apple.com, mca2021.darshanbhosale@asmedu.org, darshanbhosale7754@gmail.com Hello World!')
pattern = r'([\w\.-]+)@([\w\.-]+)'
replace = r'\1@XYZ.com'
print (re.sub(pattern, replace, str))
