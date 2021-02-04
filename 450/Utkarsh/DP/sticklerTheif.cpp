//https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1#
#include<bits/stdc++.h>
using namespace std;

ll FindMaxSum(ll a[], ll n)
{
    if(n==1) return a[0];
    else if( n==2) return max( a[0], a[1]);
    ll dp[n+1];
    dp[0] = a[0];
    dp[1] = max(a[0],a[1]);
    for(int i =2; i <= n ; i++)
        dp[i] = max(dp[i-1],dp[i-2]+a[i]);
    return dp[n-1];
}