n=int(input("Enter a no."))
sum=0
number=n
while(n!=0):
    rem=n%10
    sum=sum+rem*rem*rem
    n//=10
if(sum==number):
    print("Armstrong no.")
else:
    print("not an armstrong no.")
    
