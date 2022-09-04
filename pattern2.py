n=int(input("Enter the no.of rows"))
for i in range (1,n+1):
    for j in range(1,n-i):
        print('',end='')
    for j in range(1,i+1):
            print("*",end='')
    print()


rows = int(input("Please Enter the Total Number of Rows  : "))

print("Mirrored Right Triangle Star Pattern")
for i in range(1, rows + 1):
    for j in range(1, rows + 1):
        if(j <= rows - i):
            print(' ', end = '  ')
        else:
            print('*', end = '  ')
    print()


n=int(input("Enter the no.of rows"))
for i in range (n):
    for j in range(i,n):
        print('*',end=' ')
    print()


n=int(input("Enter the no.of rows"))
for i in range (n):
    for j in range(i,n):
        print(' ',end=' ')
    for j in range(i+1):
        print('*',end=' ')
    print()

