#6a. Lists: Write a program for performing Binary search operation.

def Binary_Search(List, Key):
    low=0
    high=len(List)-1
    while low<=high:
        mid = (low+high)//2
        if List[mid]==Key:
            return mid
        elif Key > List[mid]:
            low = mid + 1
        else:
            high = mid - 1
    return -1

#Driver code
List = [12, 23, 45, 58, 100, 129, 145, 300, 360, 722]
print("Contents of the list are as follows:")
print(List)
Key = eval(input(" Enter the number to be searched = "))
Found = Binary_Search(List, Key)
if Found == -1:
    print(Key ,'is NOT present in the list.')
else:
    print(Key ,' is present at position ', Found+1)
