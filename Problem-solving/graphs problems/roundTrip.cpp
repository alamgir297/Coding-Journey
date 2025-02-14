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
#define debug cout<< "here\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
bool visited[max_size];
vi adj[max_size];
vi cycle;
int found=0;
void addEdge(vi adj[], int u, int v){
    adj[u].pb(v);
    adj[v].pb(u);
}
bool dfs(int src, int par){
    visited[src]=true;
    bool isCycle=false;
    cycle.pb(src);
    for(auto child: adj[src]){
        if(visited[child] && child==par) continue;
        if(visited[child]){
            cycle.pb(child);
            found=child;
            return true;
        }
        isCycle|=dfs(child, src);
        if(isCycle) return true;
        cycle.pop_back();
    }
    return isCycle;
}
int main()
{
//    fastIO();
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        addEdge(adj, x, y);
    }
    bool flag=false;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            cycle.clear();
            if(dfs(i, 0)){
                flag=true;
                break;
            }
        }
    }
    if(flag){
        vi ans;
        ans.pb(found);
         for(int i=cycle.size()-2; i>=0; i--){
            if(cycle[i]==found) break;
            ans.pb(cycle[i]);
        }
        ans.pb(found);
        cout<<ans.size()<<endl;
        for(auto it: ans) cout<<it<<space;
        newline;
    }
    else cout<< "IMPOSSIBLE\n";
    return 0;
}

//1 2
//2 4
//2 3
//4 6
//3 7
//5 8
//8 9
//9 11
//11 10
//10 13
//13 14
//14 15
//15 12
//12 5
