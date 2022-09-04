#without funtion
n=int(input("enter a number"))
sum=0
mul=1
while(n!=0):
    d=int(n%10)
    sum+=d
    mul*=d
    n=n//10
if(sum==mul):
    print("Spy number")
else:
    print("not a spy number")


#with function
def checkSpy(n):
 s = 0
 p=1
 while n>0:
   digit = n % 10
   s = s + digit
   p = p * digit
   n = n // 10
 if s == p:
  return True
 else:
  return False
n = int(input("enter a number"))
if (checkSpy(n)):
  print("The number is a Spy Number")
else:
  print("The number is NOT a spy number")
