//https://practice.geeksforgeeks.org/problems/n-queen-problem/0

#include<bits/stdc++.h>
using namespace std;

// This solution is much more easy to understand than the other one 
typedef vector<int> vi;
typedef  vector<vi> vvi;

class Solution{
public: 
     void pushback(vvi chess ,vvi ans, int n){
        vi temp (n);
    	for (int i = 0; i < n; i++) 
    		for (int j = 0; j < n; j++) 
    			if(chess[j][i] ) temp[i] = j;
            // Here chess[i][j] also gives the correct answer but ,
            // for the sake of gfg sequence [j][i] is used
        ans.push_back(temp);
    }

    bool safe(vvi chess, int row  , int col, int n){
        for(int i =0;i<col;i++)
            if(chess[row][i]) return false;
        for(int i =row , j = col ; i >=0 && j>=0 ; i-- , j--)
            if(chess[i][j]) return false;
        for(int i =row , j = col ; i <n && j>=0 ; i++ , j--)
            if(chess[i][j]) return false;
        return true;
    }

    bool solve(vvi ans,vvi chess,int j,int n){
        if(j == n ){
            pushback(chess , ans , n)
            return true; 
        }
        bool flag =0;
        for	(int i =0; i<n;i++)
            if(safe(chess, i, j , n)) 
            {
                chess[i][j] = 1;
                if(solve(ans, chess , j+1,n))
                    flag =1;//Here flag =1 can be replace with return true;
            // which will terminate program when any one solution is found 
                chess[i][j] =0;//backtrack
            }
        return flag;
    }
    
    vvi nQueen(int n) {
        vvi ans ;
	vvi chess (n , vector<int > (n,0)); // The chess board matrix
        solve(ans, chess ,0, n );
        return ans;
    }
};


//First solution , hard to understand but optimized
#define N 10

void printGrid(int arr[], int n) {
	printf("[");
	for (int i = 0; i < n; i++) 
		printf("%d ", arr[i] + 1);
	printf("] \n");
}

bool safe(int arr[], int x, int y) {
	for (int i = 0; i < x; i++)
		if (arr[i]==y || abs(x-i) == abs(y-arr[i])) 
			return false;

	return true;
}

void solveNQueens(int arr[], int n, int x, bool *flag) {
	if (x == n) {
		printGrid(arr, n);
		*flag = true;
	}
	for (int i = 0; i < n; i++) 
		if (safe(arr, x, i)) {
			arr[x] = i;
			solveNQueens(arr, n, x + 1, flag);
		}
}

void solve() {
	int n;
	scanf("%d", &n);
	int arr[n];
	bool flag = false;
	solveNQueens(arr, n, 0, &flag);
	if(!flag) printf("-1\n");
	else printf("\n");
}

int main() {
	int testcase =1;
	while (testcase--)solve();
	return 0;
}