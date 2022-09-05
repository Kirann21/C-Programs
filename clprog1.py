#print the following - 0 2 1 3 1 5 2 7 3 11 5 13 8 17 13 19 21 23 34 (fibonacci series at even positions , prime numbers at odd positions)
# 0 1 1 2 3 5 8 13 21 34 - fibonacci series
# 2 3 5 7 11 13 17 19 23 - prime numbers

L=[]
Q=[]
a=0
b=1
temp=n
count=0
n= int(input("Enter the no.of terms:"))
if n<0:
    print("Please enter a positive integer:")
else:
    while count<n/2:
        L.append(a)
        c=a+b
        a=b
        b=c
        count+=1

print(L)        


#--------------------------------------------------------------incomplete------------------------------------------------------------------
