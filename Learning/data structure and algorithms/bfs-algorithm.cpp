#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void addEdge(vi adj[], int u, int v){
    adj[u].pb(v);
    adj[v].pb(u);
}
void bfs(vi adj[], int s, int n){
    vector<bool>visited(n, false);
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        cout<<s<<space;
        for(auto it: adj[s]){
            if(visited[it]) continue;
            visited[it]=true;
            q.push(it);
        }
    }
}
int main()
{
    //fastIO();
    int n,u,v;
    cin>>n;
    vi adj[n];
    for(int i=0; i<n; i++){
        cin>>u>>v;
        addEdge(adj, u,v);
    }
    for(int i=0; i<n;i++){
        cout<< "vertex "<<i<<": ";
        for(auto it: adj[i]) cout<<it<<space;
        newline;
    }
    bfs(adj, 1, n);
    return 0;
}
