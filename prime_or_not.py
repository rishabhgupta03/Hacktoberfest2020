from math import sqrt
num = int(input("Enter a number: ")) #input
flag = 0
if num<2:
    print("Not prime.")
else:
    for i in range(2,int(sqrt(num))+1): #iteration count
        if(num % i)==0: #condition
            print(num,"is not a prime number")
            print(i,"times",num//i,"is",num)
            flag=1
            break
    if(flag==0):
        print(num,"is a prime number")
