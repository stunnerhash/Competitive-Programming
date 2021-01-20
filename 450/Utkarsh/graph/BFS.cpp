//https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1#
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> x;
        vector<bool> v(V + 1, 0);
        queue<int> q;
        q.push(0);
        while (!q.empty()){
            int temp = q.front();
            q.pop();
            for (auto it : adj[temp]){
                if (!v[it]){
                    v[it] = 1;
                    q.push(it);
                }
            }
            x.push_back(temp);
        }
        return x;
    }
};