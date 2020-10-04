t= int(input())
for k  in range(t):
 str=input()
 substring=[]
 for i in range(len(str)):
    for j in range(i+1,len(str)+1):
        substring.append(str[i:j])
 pal=[]
 for i in range(0,len(substring)):
     temp=substring[i]
     temp1=temp[::-1]
     if (temp==temp1):
      pal.append(temp)
 max=""
 for i in range(0,len(pal)):
    if((len(pal[i])>len(max)) and (len(pal[i])>1)):
        max=pal[i]
    elif(len(max)<=1):
        max=pal[0] #max=str[:1]
 print(max)
 substring.clear()
 pal.clear()
