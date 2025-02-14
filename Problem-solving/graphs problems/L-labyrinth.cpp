#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 200007
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
int nodes;
void addEdge(vi adj[], int u, int v){
    adj[u].pb(v);
}
bool visited[nodes];
int main()
{
    //fastIO();
    int m,s;
    cin>>nodes>>m>>s;
    vi adj[n+5];
    stack<int>stk;
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        addEdge(adj, x, y);
    }
    stk.push(s);
    while(!stk.empty()){
        int s=stk.top();

    }
    return 0;
}
