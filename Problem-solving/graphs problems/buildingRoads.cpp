#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define qpair queue<pair<int,int>>
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
bool visited[max_size];
vector<pair<int,int>>roads;
void addEdge(vi adj[], int u, int v){
    adj[u].pb(v);
    adj[v].pb(u);
}
int bfs(vi adj[], int source, int n){
    queue<int>q;
    q.push(source);
    visited[source]=true;
    int last=0,flag=0;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        for(auto it: adj[s]){
            if(visited[it]) continue;
            visited[it]=true;
            q.push(it);
            last=it;
            flag=1;
        }
    }
    if(flag) return last;
    return source;
}

int main()
{
    fastIO();
    int n,m;
    cin>>n>>m;
    vi adj[n+1];
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        addEdge(adj, x,y);
    }
    int last=0;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            last=bfs(adj, i, n);
            break;
        }
    }
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            roads.pb({last, i});
            last=bfs(adj, i, n);
        }
    }
    cout<<roads.size()<<endl;
    for(auto it: roads){
        auto[a,b]=it;
        cout<<a<<space<<b<<endl;
    }
    return 0;
}
//11 6
//1 6
//2 3
//3 10
//7 8
//4 5
//9 11
