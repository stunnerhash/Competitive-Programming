//https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1#
include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    long long countTriplets(long long a[], int n, long long sum)
    {
        sort(a,a+n);
        int cnt =0;
        for(int i = 0; i < n ; i++){
            int j = i+1, k = n-1;
            while(j<k)
                if( a[i]+a[j]+a[k] >=sum ) k--;
                else cnt+=k-j++; // cnt+= k-j; j++;
        }
        return cnt;
    }
};