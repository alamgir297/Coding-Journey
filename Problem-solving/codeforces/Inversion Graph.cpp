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
#define fastIO() ({\
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);\
})

using namespace std;

void addEdge(vi adj[], int u, int v){
    adj[u].pb(v);
    adj[v].pb(u);
}
void bfs(vi adj[], int s, int n,bool visited[]){
//    vector<bool>visited(n, false);
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
    newline;
}
int main()
{
    //fastIO();
    int t,n,u,v;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n];
        bool visited[n]={false};
        vi adj[n];
        for(int i=0; i<n; i++) cin>>ar[i];
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                u=ar[i],v=ar[j];
                if(u>v){
                    addEdge(adj, u,v);
                }
            }
        }
        for(int i=0; i<n;i++){
            cout<< "vertex "<<ar[i]<<": ";
            for(auto it: adj[i]) cout<<it<<space;
            newline;
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            int node=ar[i];
            if(visited[node]==false){
//                bfs(adj, node, n,visited);
                cnt++;
            }
            visited[node]=true;
        }
        cout<<cnt<<endl;
        for(auto &v: adj) v.clear();
    }
    return 0;
}
