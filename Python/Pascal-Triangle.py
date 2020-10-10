#Function to calculate the ith row of pascal triangle
def getRow(rowIndex: int):
        if rowIndex==0:
            return [1]
        elif rowIndex==1:
            return [1,1]
        else:
            prev=[1,1]
            new=[]
            for i in range(2,rowIndex+1):
                new.append(1)
                for j in range(i-1):
                    new.append(prev[j]+prev[j+1])
                new.append(1)
                prev=new
                new=[]
            return prev
            
n = int(input())
#No of rows input
lis=[]
for i in range(n-1):
    lis.append(getRow(i))

for e in lis:
        print(e)