#WRITE A PYTHON PROGRAM TO PRINT PERFECT NUMBERS BETWEEN A GIVEN RANGE.


a=int(input("ENTER THE LOWER LIMIT "))
b=int(input("ENTER THE UPPER LIMIT "))
print("The Perfect numbers within",a,"and",b,"are :")
for i in range(a,b+1):
    s=0
    for j in range(1,((i//2)+1)):
        if(i%j==0):
            s=s+j       
    if(s==i):
        print(i)
    
        
