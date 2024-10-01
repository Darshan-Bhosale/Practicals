bd=eval(input('Enter the Birth Day::'))
bm=eval(input('Enter the Birth Month::'))
by=eval(input('Enter the Birth Year::'))
cd=eval(input('Enter the Current Day::'))
cm=eval(input('Enter the Current Month::'))
cy=eval(input('Enter the Current Year::'))
if(cd<bd):
    if(cm==2 or cm==4 or cm==6 or cm==9 or cm==11):
        if(cm==2)and(cy%4==0):
            cm-1
            cd+29
            cd-bd
        elif(cm==2):
            cm-1
            cd+28
            cd-bd
        else:
            cm-1
            cd+30
            cd-bd
    else:
        cm-1
        cd+31
        cd-bd
else:
    cd-bd
if(cm<bm):
    cy-1
    cm+12
    cm-bm
else:
    cm-bm
    cy-by
print("Current age day:",cd,"Month:",cm,"Year:",cy)
            
