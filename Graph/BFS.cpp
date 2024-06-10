#include <bits/stdc++.h>
using namespace std;
void BFS(vector<int>adj[],int v,int s){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    queue<int>q;
    visited[s]=true;
    q.push(s);
    
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int v:adj[u]){
            if(visited[v]==false){
                visited[v]=true;
                q.push(v);
            }
        }
    }
}
void adjacency(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main(){
    int v=5;
    vector<int>adj[v];
    adjacency(adj,0,1);
    adjacency(adj,0,2); 
	adjacency(adj,1,2); 
	adjacency(adj,2,3); 
	adjacency(adj,1,3);
	adjacency(adj,3,4);
	adjacency(adj,2,4);
    cout<<"BFS traversal is following"<<endl;
    BFS(adj,v,0);
    return 0;
}