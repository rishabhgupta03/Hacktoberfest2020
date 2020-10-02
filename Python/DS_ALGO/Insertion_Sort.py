# Contributed by @Hinal-Srivastava

#Function to implement Insertion Sort
def insertionsort(lst,n):
    for i in range(n-1):
        temp = lst[i]
        j = i - 1
        while (j >= 0 and temp < lst[j]):
            lst[j + 1] = lst[j]
            j = j - 1
            lst[j + 1] = temp 
#Driver Program
lst = []
n = int(input("Number of Elements : "))
for i in range(n):
    value = int(input("%d Element : " %i))
    lst.append(value)
insertionsort(lst, n)
print("Sorted List : ", lst, end='')