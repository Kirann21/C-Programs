n=int(input('enter a number to check wether it is duck number or not'))
c=0
while(n>0):
 d=int(n%10)
 if(d==0):
    c=c+1
 n=n//10
if(c>0):
  print('duck number')
else :
  print('not a duck number')
