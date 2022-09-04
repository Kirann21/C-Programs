n=int(input("Enter a number"))
sum=0
num=n
for i in range (1,n-1):
    if(n%i==0):
        sum=sum+i
if(sum==n):
    print("the no. is perfect")
else:
    print("the no. is not perfect")
    
