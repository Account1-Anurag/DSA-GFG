#include <bits/stdc++.h>
using namespace std;
void BFS(vector<int> adj[], int i, bool visited[])
{
    queue<int> q;
    q.push(i);
    visited[i] = true;
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : adj[u])
        {
            if (visited[v] == false){
                visited[v]=true;
                q.push(v);
            }
        }
    }
}

void BfSdisconnect(vector<int> adj[], int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] == false;
    }
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            visited[i] = true;
            BFS(adj, i, visited);
        }
    }
}
void adjacency(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int v = 7;
    vector<int> adj[v];
    adjacency(adj,0,1); 
	adjacency(adj,0,2); 
	adjacency(adj,2,3); 
	adjacency(adj,1,3); 
	adjacency(adj,4,5);
	adjacency(adj,5,6);
	adjacency(adj,4,6);
    cout << "BFS traversal is following" << endl;
    BfSdisconnect(adj, v);
    return 0;
}