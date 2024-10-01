print("***Exam marks out of 100 ***")
m1=int(input("Enter marks in Subject1 subject:"))
m2=int(input("Enter marks in Subject2 subject:"))
m3=int(input("Enter marks in Subject3 subject:"))
m4=int(input("Enter marks in Subject4 subject:"))
m5=int(input("Enter marks in Subject5 subject:"))
total=m1+m2+m3+m4+m5
per=total/5.00
print("Total marks obtained examination are :",total,"out of 500")
print("Percentage obtained: ",per,"%")
if per>=75:
    print("HONORS")
elif per<=74 and per>=60:
    print("I DIVISION")
elif per<=59 and per>=40:
    print("II DIVISION")
else:
    print("Failed")
