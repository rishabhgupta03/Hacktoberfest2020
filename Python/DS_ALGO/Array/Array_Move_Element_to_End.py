import numpy as np
def move_element_to_end(arr,to_move):
	i=0
	j=len(arr)-1
	while i<j:
		while i<j and arr[j]==to_move:
			j-=1
		if arr[i]==to_move:
			arr[i],arr[j]=arr[j],arr[i]
		i+=1
	return arr
#Test Case 1
array1=np.array([1,2,3,5,7,2])
print(move_element_to_end(array1,2))
#Test Case 2
array2=np.array([1,2,0,5,7,2])
print(move_element_to_end(array2,0))
#Test Case 3
array3=np.array([1,-2,3,5,7,2])
print(move_element_to_end(array3,-2))
#Test Case 4
array3=np.array([1,-2,101,5,7,2])
print(move_element_to_end(array3,101))