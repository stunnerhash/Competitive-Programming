https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1#
#include<bits/stdc++.h>
using namespace std;

int NumberofElementsInIntersection (int arr1[], int arr2[], int n, int m )
{
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    set<int> s;
    int i = 0, j = 0, ans =0;
    while (i < n && j < m) { 
        if (arr1[i] < arr2[j]) i++; 
        else if (arr2[j] < arr1[i]) j++; 
        else {
            s.insert(arr1[i]);
            i++,j++;
        }
    } 
    return s.size();
}