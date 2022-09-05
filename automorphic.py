n=int(input("Enter a number"))
num=n
t=10
sq=n*n
f=0
print("The square of",n,"is",sq)
while n>0 :
    r=sq%t
    if(r==num):
        f=1
        break
    n=n//10
    t=t*10
if(f==1):
    print("Automorphic number")
else:
    print("not an automorphic number")





n=int(input("Enter a number"))
num=n
sq=n*n
f=0
print("The square of",n,"is",sq)
num=str(num)
sq=str(sq)
if sq.endswith(num):
    print("Automorphic no")
else:
    print("not an automorphic no")
