#5c. Polymorphism: Write a program to demonstrate, operator overloading to concatenate two strings.

class polymorphism:
    def add(self,a,b):
        self.c=a+b
        return self.c
ob=polymorphism()
result=ob.add("HOD.Milind"," Deshkar Sir")
print("Concatenated String is:",result)
