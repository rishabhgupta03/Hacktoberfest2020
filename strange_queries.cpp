def solve (arr, L2, R1, R2, L1):
    # Write your code here
    ans = []
    eq =[]
    match = []
    # print(arr)
    n = len(R2)
    # print(n)
    # print(L2)
    for i in range(len(arr)):
        for j in range(i,len(arr)):
            if(arr[i]==arr[j]):
                match.append([i+1,j+1])
                if(i!=j):
                    match.append([j+1,i+1])
            

    # print(match)
    for m in range(n):
        # print("m = ",m)
        l1 = L1[m]
        l2 = L2[m]
        r1 = R1[m]
        r2 = R2[m]
        # if(m==n-1):
        # print("l1 = ",l1," l2 = ",l2," r1 = ",r1," r2 = ",r2)
        count=0
        for g in range(len(match)):
            ii = match[g][0]
            jj = match[g][1]
            if(ii>=l1 and ii<=r1 and jj>=l2 and jj<=r2):
                count+=1
        # print("l1 = ",l1," l2 = ",l2," r1 = ",r1," r2 = ",r2)
        # for i in range(l1-1,r1):
        #     for j in range(l2-1,r2):
        #         # print("i = ",i," j = ",j)
        #         if(arr[i]==arr[j]):
        #             count+=1
        ans.append(count)
    # ans.append(0)
    # print("Ans is",ans)
    return ans

N = int(input())
arr = list(map(int, input().split()))
Q = int(input())
L1 = []
R1 = []
L2 = []
R2 = []
for i in range(Q):
    l1,r1,l2,r2 = map(int, input().split())
    L1.append(l1)
    L2.append(l2)
    R1.append(r1)
    R2.append(r2)

out_ = solve(arr, L2, R1, R2, L1)
print ('\n'.join(map(str, out_)))
