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
void addEdge(vi adj[], int u, int v){
    adj[u].pb(v);
    adj[v].pb(u);
}
int main()
{
    fastIO();
    int n,m;
    cin>>n>>m;
    int cats[n+10];
    vi adj[n+5];
    vector<bool>visited(n+5, false);
    int degree[n+2]={0};
    for(int i=1; i<=n; i++) cin>>cats[i];
    for(int i=0; i<n-1; i++){
        int x,y;
        cin>>x>>y;
        degree[x]++,degree[y]++;
        addEdge(adj,x,y);
    }
    stack<int>stk;
    stk.push(1);
    int cat=0,cnt=0,ok=0,tmp=cats[1];
    while(!stk.empty()){
        int s=stk.top();
        stk.pop();
        if(!visited[s]){
            visited[s]=true;
        }
        if(cats[s]==1){
            if(cat+1>m){
                continue;
            }
            else cat++;

        }
        if(degree[s]>1 &&!cats[s]){
            cat=0;
            tmp=0;
        }
        if(degree[s]==1 && cat<=m && s!=1){
//            cout<< "src "<<s<<endl;
            ok++;
            cat=tmp;
        }
        for(auto it: adj[s]){
            if(!visited[it]){
                stk.push(it);
            }
        }
    }
    cout<<ok<<endl;
    return 0;
}
