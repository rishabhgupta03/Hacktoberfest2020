def SelSort(arr):

    #Go through all array elements
    for i in range(len(arr)):
        #Find minimum
        min = i
        for j in range(i+1, len(arr)):
            if (arr[j]<arr[min]):
                min=j
        #Swap the minimum element with the first element
        temp = arr[i]
        arr[i] = arr[min]
        arr[min] = temp
    #Return sorted array
    return arr

print(SelSort([5,7,8,5,23,6,4,1,0]))

