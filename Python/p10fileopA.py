#10a. File operations: Write a program that reads data from a file and calculate the percentage of vowels and consonants in the file.

filename = input("Enter the filename = ")
with open(filename) as file:
    text = file.read()
    countV = 0
    countC = 0
for char in text:
    if char in "aeiou":
        countV = countV + 1
    else:
        countC = countC + 1
print(" Number of vowels = ",countV)
print(" Number of consonants = ",countC)
print(" Total length of file = ",len(text))
print(" Percentage of Vowels in the file = ",((countV)*100)/len(text),"%")
print(" Percentage of Consonants in the file = ",((countC)*100)/len(text),"%")
