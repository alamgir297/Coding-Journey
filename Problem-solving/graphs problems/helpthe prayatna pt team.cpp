#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
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
void addEdge(vi adj[], int u,int v){
    adj[u].pb(v);
    adj[v].pb(u);
}
void bfs(vi adj[], int source, int n, bool visited[]){
    queue<int>q;
    q.push(source);
    visited[source]=true;
    int cnt=0;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        for(auto u: adj[s]){
            if(visited[u]) continue;
            visited[u]=true;
            q.push(u);
        }
    }
}
int main()
{
    //fastIO();
    int t,n,e;
    cin>>t;
    while(t--){
        cin>>n>>e;
        vi adj[n+5];
        bool visited[n];
        for(int i=0; i<n; i++) visited[i]=false;
        int ans=0;
        if(e>0){
            for(int i=0; i<e;i++){
                int a,b;
                cin>>a>>b;
                addEdge(adj, a, b);
            }
        }
        for(int i=0;i<n;i++){
            if(!visited[i]){
                ans++;
            }
            bfs(adj, i, n, visited);
        }
        cout<<ans<<endl;
    }
    return 0;
}
