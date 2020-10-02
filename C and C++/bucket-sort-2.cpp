// C++ program to sort an array using bucket sort 
#include <bits/stdc++.h>
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std;
typedef long long ll;

// Function to sort arr[] of size n using bucket sort 
void bucketSort(float arr[], int n) 
{ 
	// 1) Create n empty buckets 
	vector<float> b[n]; 

	// 2) Put array elements in different buckets 
	for (int i = 0; i < n; i++) { 
		int bi = n * arr[i]; // Index in bucket 
		b[bi].push_back(arr[i]); 
	} 

	// 3) Sort individual buckets 
	for (int i = 0; i < n; i++) 
		sort(b[i].begin(), b[i].end()); 

	// 4) Concatenate all buckets into arr[] 
	int index = 0; 
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < b[i].size(); j++) 
			arr[index++] = b[i][j]; 
} 

/* Driver program to test above function */
int main() 
{ 
	float a[] = { 0.45, 0.54, 0.65, 0.72, 0.535, 0.932 }; 
	int n = sizeof(a) / sizeof(a[0]); 
	bucketSort(a, n); 

	cout << "Sorted array is \n"; 
	for (int i = 0; i < n; i++) 
		cout << a[i] << " "; 
	return 0; 
} 
