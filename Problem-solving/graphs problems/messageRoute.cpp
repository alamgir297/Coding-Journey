#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define qpair queue<pair<int,int>>
#define vp vector<pair<int,int>>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define all(v) v.begin(),v.end()
#define start begin()
#define finish end()
#define max_size 2000000
#define yes "YES\n"
#define no "NO\n"
#define debug cout<< "here\n"
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

int main()
{
    fastIO();
    int n,m,flag=0;
    cin>>n>>m;
    vi adj[n+5];
    map<int,int>parents;
    queue<int>q;
    vi path;
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        addEdge(adj, x,y);
    }
    q.push(1);
    visited[1]=true;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        for(auto it: adj[s]){
           if(visited[it]) continue;
            visited[it]=true;
            q.push(it);
            parents[it]=s;
        }
    }
    if(visited[n]){
        path.pb(n);
        int tmp=n;
        while(parents[tmp]!=1){
            path.pb(parents[tmp]);
            tmp=parents[tmp];
        }
        path.pb(1);
        reverse(path.begin(), path.end());
        cout<<path.size()<<endl;
        for(auto it: path){
            cout<<it<<space;
        }
        newline;
    }
    else cout<< "IMPOSSIBLE"<<endl;

    return 0;
}
