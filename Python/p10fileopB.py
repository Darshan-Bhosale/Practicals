#10b. File operations: Write a program that read from a file, writes to a file and appends to a file.

file1 = open("test2.txt", "w")
L = ["This is Delhi \n", "This is Pune \n", "This is Nagpur"]
file1.writelines(L)
file1.close()
# Append-adds at last
file1 = open("test2.txt", "a")
# append mode
file1.write("\nToday is a fresh day. \n")
file1.close()
file1 = open("test2.txt", "r")
print("Output of Readlines after appending")
print("Player 2 Won")
print(file1.read())
print()
file1.close()
# Write-Overwrites
file1 = open("test2.txt", "w")
# write mode
file1.write("\n Tomorrow will be even more fresh. \n")
file1.close()
file1 = open("test2.txt", "r")
print("Output of Readlines after writing")
print(file1.read())
print()
file1.close()
