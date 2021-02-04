//https://www.geeksforgeeks.org/searching-array-adjacent-differ-k/

#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x, int k)
{
    int i=0;
    while(i < n){
        if(arr[i] == x) return i ;
        i += max(1,(arr[i]-x)/k);
    }
    return -1;
}    	