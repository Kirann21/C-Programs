n=int(input("Enter a number"))
if(n%4==0):
    if(n%7==0):
        print("The number is divisible by 4 and 7")
    else:
        print("The number is divisible by 4 not by 7")
elif(n%4!=0):
    print("The number is not divisible by 4") 
elif(n%7==0):
    print("The number is divisible by 7 not by 4")
else:
    print("Not divisible by 4 and 7")
