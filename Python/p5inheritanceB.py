#5b. Inheritance: Write a program to multiple inheritance.

class internal:
    def internal_mark(self):
        print("*** Internal Exam marks out of 25 ***")
        im1=int(input("Enter marks in Physics subject:"))
        im2=int(input("Enter marks in Chemistry subject:"))
        im3=int(input("Enter marks in Mathematical subject:"))
        itotal=im1+im2+im3
        return itotal
class external:
    def external_mark(self):
        print("*** External Exam marks out of 75 ***")
        em1=int(input("Enter marks in Physics subject:"))
        em2=int(input("Enter marks in Chemistry subject:"))
        em3=int(input("Enter marks in Mathematical subject:"))
        etotal=em1+em2+em3
        return etotal
class result(internal,external):
    def getResult(self):
        self.grade=None
        self.total=super().internal_mark()+super().external_mark()
        self.per=(self.total/3.00)
        if self.per>=75:
            self.grade="HONORS"
        elif self.per<=74 and self.per>=60:
            sel.grade="I DIVISION"
        elif self.per<=59 and self.per>=40:
            self.grade="II DIVISION"
        else:
            self.grade="Failed"
res=result()
res.getResult()
print("\n**Percentage And Division obtained****")
print("Total marks obtained from rxternal and internal examination are :",res.total,"out of 300")
print("Percentage obtained: ",res.per,"%")
print("Division obtained: ",res.grade)
