n=int(input("Enter a number"))
sum=0
num=n
while(n!=0):
    d=n%10
    sum=sum+d
    n=n/10
if(n%sum==0):
    print("niven no.")
else:
    print("not a niven no")
