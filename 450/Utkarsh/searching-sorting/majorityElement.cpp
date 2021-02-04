//https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1

#include<bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int n)
{
    map <int , int > mp ;
    for(int i =0;i<n ;i++)
        mp[a[i]]++;
    for(auto i: mp) 
        if(i.second>(float)n/2) return i.first;    
    return -1;
}
