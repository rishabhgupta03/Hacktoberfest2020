# Contributed by @Hinal-Srivastava

#Function to implement Selection Sort
def selectionsort(last, n):
  for i in range(n-1):
    min = i
    for j in range(i+1, n):
      if (lst[j] < lst[min]):
        minimum = j
        temp = lst[i]
        lst[i] = lst[min]
        lst[min] = temp
#Driver Program
lst = []
n = int(input("Number of Elements : "))
for i in range(n):
    value = int(input("%d Element : " %i))
    lst.append(value)
selectionsort(lst, n)
print("Sorted List : ", lst, end='')    