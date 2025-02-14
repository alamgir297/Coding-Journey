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
void dfs(vi adj[], int s,int n){
    vector<bool>visited(n,false);
    stack<int>stack;
    stack.push(s);
    while(!stack.empty()){
        int s=stack.top();
        stack.pop();
        if(!visited[s]){
            cout<<s<<space;
            visited[s]=true;
        }
        for(auto it: adj[s]){
            if(!visited[it]) stack.push(it);
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
    dfs(adj, 0,4);
    newline;
    return 0;
}
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

int main()
{
//    fastIO();
    int a,b;
    while(cin>>a>>b){
//        if((a&1)!=1) cout<< "even\n";
//        else cout<< "odd\n";
        int flag=0;
        for(int i=1; i<=a; i++){
            for(int j=1; j<=b; j++){
                if((i&1)==1) cout<< "#";
                else if((i&1)!=1 && j==b){
                    if(!flag){
                        cout<< "#";
                        flag=1;
                    }
                }
                else cout<< ".";
            }
            newline;
        }
    }
    return 0;
}
