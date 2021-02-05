//https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {

      
    map<int, int> mp; 
   
    for (int i = 0; i < n; i++)
        mp.insert({ a[i], i }); 
   
    for (int i = 0; i < m; i++)
        mp.insert({ b[i], i });
  
  return mp.size();
}