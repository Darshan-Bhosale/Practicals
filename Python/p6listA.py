#6a. Lists: Write a program for performing Linear search operation.

def Linear_Search(List, Key):
    for i in range(len(List)):
        if List[i] == Key:
            return i
            break
    return -1

#Driver code
List = [12, 2, 45, 8, 10, 9, 1, 3, 36, 22]
print("Contents of the list are as follows:")
print(List)
Key = eval(input(" Enter the number to be searched = "))
Found = Linear_Search(List, Key)
if Found == -1:
    print(Key ,'is NOT present in the list.')
else:
    print(Key ,' is present at position ', Found+1)
