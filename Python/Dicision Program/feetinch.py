print('enter 1st distance')
f1=int(input('enter feet1:'))
in1=float(input('enter inch1:'))
print('enter 2nd distance')
f2=int(input('enter feet2:'))
in2=float(input('enter inch2:'))
print('enter 3rd distance')
f3=int(input('enter feet3:'))
in3=float(input('enter inch3:'))
refeet=f1+f2+f3
reinch=in1+in2+in3
while (reinch>=12.0):
    reinch -=12.0
    ++refeet
print('sum of distances=''feet',refeet,'inch',reinch)
