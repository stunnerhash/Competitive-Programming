//https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> x;
        vector<bool> visited(V, 0);
        stack<int> stack;
        stack.push(0);
        while (!stack.empty())
        {
            int temp = stack.top();
            stack.pop();

            if (visited[temp] == 0)
            {
                visited[temp] = 1;
                x.push_back(temp);
            }

            for (auto it = adj[temp].end() - 1; it != adj[temp].begin() - 1; it--)
                if (!visited[*it])
                    stack.push(*it);
        }
        return x;
    }
};