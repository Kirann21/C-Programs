n=int(input("Enter a number"))
sum=0
p=1
s=0
num=n
while(n>0):
    r=n%10
    s=s+r
    p=p*r
    n=n//10
    sum=s+p
if(sum==num):
    print("Special 2 digit number")
else:
    print("Not a special two digit number")


def specialNumber(n):
  f = n // 10
  l = n % 10
  p = f * l
  s = f + l
  if ((s + p) == n):
    print(n ," is a Special Two-Digit Number")
  else:
    print(n ,"is not a Special Two-Digit Number")
n = int(input("enter a two digit number"))
specialNumber(n)
