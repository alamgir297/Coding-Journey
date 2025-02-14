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
#define max_size 100005
#define yes "YES\n"
#define no "NO\n"
#define debug cout<< "here\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
map<int,int>team;
bool flag=1;
void addEdge(vi adj[], int u, int v){
    adj[u].pb(v);
    adj[v].pb(u);
}
void bfs(vi adj[], int src, bool vis[]){
    queue<pair<int,int>>q;
    q.push({src,-1});
    vis[src]=1;
    while(!q.empty()){
        if(!flag) break;
        auto[node,par]=q.front();
        q.pop();
        for(auto it: adj[node]){
            if(vis[it]){
                if(team[it]==team[node] && team[it]!=0){
                    flag=0;
                    break;
                }
            }
            if(!vis[it]){
                q.push({it, node});
                vis[it]=1;
                if(team[node]==1) team[it]=2;
                else if(team[node]==2) team[it]=1;
            }
        }
    }
}
int main()
{
//    fastIO();
    int n,m;
    cin>>n>>m;
    vi adj[n+2];
    bool visited[n+1];
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        addEdge(adj, x, y);
    }
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            team[i]=1;
            bfs(adj, i, visited);
        }
    }
    if(flag){
        for(int i=1; i<=n; i++) cout<<team[i]<<space;
        newline;
    }
    else cout<< "IMPOSSIBLE"<<endl;
    return 0;
}
