
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
bool isCyclic_util(vector<int> adj[], vector<bool> visited, int curr)
{
    if (visited[curr] == true)
        return true;

    visited[curr] = true;
    bool FLAG = false;
    for (int i = 0; i < (int)adj[curr].size(); ++i)
    {
        FLAG = isCyclic_util(adj, visited, adj[curr][i]);
        if (FLAG == true)
            return true;
    }
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    vector<bool> visited(V, false);
    bool FLAG = false;
    for (int i = 0; i < V; ++i)
    {
        visited[i] = true;
        for (int j = 0; j < (int)adj[i].size(); ++j)
        {
            FLAG = isCyclic_util(adj, visited, adj[i][j]);
            if (FLAG == true)
                return true;
        }
        visited[i] = false;
    }
    return false;
}
void visit(int vertex,vector<int> g[],vector<bool> &visited,vector<int> &dp){
	visited[vertex] = 1;
	dp[vertex] = 0;
	for(int child:g[vertex]){
		if(!visited[child]){
			visit(child,g,visited,dp);
		}
		dp[vertex] = max(dp[vertex] , 1 + dp[child]);
	}
}
int main()
{

    string str;
    cin >> str;
    int n = 0;
    for (auto it : str)
    {
        if (it == '.')
            n++;
    }

    vector<int> g[n + 1];
    int i = 1;
    while (i < (int)str.size())
    {
        int x = str[i - 1] - '0';
        if (str[i] == '.')
        {
            i += 2;
            string num = "";
            if(str[i]=='}')
            {
                g[x]={};
            }
            while (str[i] != '}')
            {

                while (str[i] != ',' && str[i] != '}')
                {
                    num += str[i];
                    i++;
                }
                stringstream geek(num);
                int xx = 0;
                geek >> xx;
                g[x].push_back(xx);
                num = "";
                if (str[i] == '}')
                    break;
                i++;
            }
        }
        i++;
    }
    
   
    if (isCyclic(n, g) == true)
    {
        cout << "error" << endl;
    }
    else
    {
        vector<int> dp(100005,0);
        vector<bool> visited(100005,false);
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                visit(i,g,visited,dp);
            }
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans = max(ans, dp[i]);
        }
        cout<<ans;
    }

    return 0;
}
