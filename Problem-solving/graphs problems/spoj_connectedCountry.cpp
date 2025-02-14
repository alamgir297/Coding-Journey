#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define all(v) v.begin(),v.end()
#define start begin()
#define finish end()
#define max_size 2000000
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
bool visited[max_size];
void addEdge(vi adj[], int u, int v){
    adj[u].pb(v);
    adj[v].pb(u);
}
void bfs(vi adj[], int src, int n){
    queue<int>q;
    q.push(src);
    visited[src]=true;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        for(auto it: adj[s]){
            if(visited[it]) continue;
            visited[it]=true;
            q.push(it);
        }
    }
}
int main()
{
    fastIO();
    int n,m;
    cin>>n>>m;
    vi adj[n];
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        addEdge(adj,x,y);
    }
    queue<int>q;
    for(int i=0; i<m; i++){
        if(!visited[i]){
            bfs(adj, i, n);
            break;
        }
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            cnt++;
            bfs(adj, i, n);
        }
    }
    cout<<cnt<<endl;
    return 0;
}
