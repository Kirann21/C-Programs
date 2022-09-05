n=int(input("Enter a number"))
sum=0
num=n
sq=n*n
while(sq!=0):
    d=int(sq%10) #int type cast in these kind of programs
    sum=sum+d
    sq=sq/10
if(sum==num):
    print("Neon number")
else:
    print("not a neon number")
    
