//https://practice.geeksforgeeks.org/problems/count-squares3649/1
#include<bits/stdc++.h>
using namespaces std;

class Solution {
  public:
    int countSquares(int N) {
        int x=0;
        for(int i =1;i*i<N;i++) x++;
        return x;
    }
};
