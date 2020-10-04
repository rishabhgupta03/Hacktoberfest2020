# Contributed by @Hinal-Srivastava

#Function to implement Bubble Sort
def bubblesort(lst, n):
    for i in range(n-1):
        for j in range(n - i - 1):
            if(lst[j] > lst[j + 1]):
                 temp = lst[j]
                 lst[j] = lst[j + 1]
                 lst[j + 1] = temp
#Driver Program
lst = []
n = int(input("Number of Elements : "))
for i in range(n):
    value = int(input("%d Element : " %i))
    lst.append(value)
bubblesort(lst, n)
print("Sorted List : ", lst, end='')