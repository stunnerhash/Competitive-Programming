//https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array/0#

#include <bits/stdc++.h> 
using namespace std; 

int binarySearch(int arr[], int low, int high, int key) { 
	if (high < low) return -1; 
	int mid = (low + high) / 2;
	if (key == arr[mid]) return mid; 
	if (key > arr[mid]) 
      return binarySearch(arr, (mid + 1), high, key); 
	return binarySearch(arr, low, (mid - 1), key); 
} 

int Pivot(int arr[], int low, int high) 
{ 
	if (high < low) return -1; 
	if (high == low) return low; 

	int mid = (low + high) / 2; /*low + (high - low)/2;*/
	if (mid<high && arr[mid] > arr[mid+1]) return mid; 
	if (mid>low && arr[mid]<arr[mid-1]) return (mid - 1); 
	if (arr[low] >= arr[mid]) 
		return Pivot(arr, low, mid - 1); 

	return Pivot(arr, mid + 1, high); 
} 
int pivotedBinarySearch(int arr[], int n, int key) 
{ 
	int pivot = Pivot(arr, 0, n - 1); 
	if (pivot == -1) return binarySearch(arr, 0, n - 1, key); 
	if (arr[pivot] == key)return pivot; 

	if (arr[0] <= key) return binarySearch(arr, 0, pivot - 1, key); 
	return binarySearch(arr, pivot + 1, n - 1, key); 
} 

void Solve()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    cout<<pivotedBinarySearch(arr, n , key)<<endl;
}

int main()
{
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
srand(chrono::high_resolution_clock::now().time_since_epoch().count());

int Testcase = 1;
cin>>Testcase;
while (Testcase--) Solve();
return 0;
}