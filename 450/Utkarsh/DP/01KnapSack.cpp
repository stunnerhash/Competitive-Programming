//https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];
int knapSacki(int W, int wt[], int val[], int n) 
{ 
    if( n == 0 ||W==0 ) 
        return 0;
        
    if(dp[n-1][W] != -1)
        return dp[n-1][W];
    
    if(wt[n-1]<=W)
        return dp[n-1][W] = max(val[n-1] + knapSacki(W-wt[n-1], wt, val, n-1) , knapSacki(W, wt, val, n-1));
    
    return dp[n-1][W] = knapSacki(W ,wt ,val ,n-1);
}
int knapSack(int W, int wt[], int val[], int n) {
    memset(dp,-1,sizeof(dp));
    return  knapSacki( W,  wt, val,  n); 
}
