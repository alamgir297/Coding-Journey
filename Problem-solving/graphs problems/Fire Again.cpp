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
bool isValid(int i,int j,int n, int m){
    if(i<=0 || i>n || j<=0 || j>m) return false;
    return true;
}
int main()
{
    //fastIO();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    int k;
    cin>>k;
    queue<pair<int,int>>q;
    pair<int,int>pairr;
    bool visited[n+5][m+5];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            visited[i][j]=false;
        }
    }
    for(int i=0; i<k; i++){
        int a,b;
        cin>>a>>b;
        pairr=make_pair(a,b);
        q.push(pairr);
        visited[a][b]=true;
    }
    pair<int,int>last,tmp;
    while(!q.empty()){
        pair<int,int>s=q.front();
        q.pop();
        int x=s.first,y=s.second;
        if(isValid(x,y+1,n,m)&&!visited[x][y+1]){
            tmp=make_pair(x,y+1);
            q.push(tmp);
            visited[x][y+1]=true;
        }
        if(isValid(x,y-1,n,m)&&!visited[x][y-1]){
            tmp=make_pair(x,y-1);
            q.push(tmp);
            visited[x][y-1]=true;
        }
        if(isValid(x-1,y,n,m) && !visited[x-1][y]){
            tmp=make_pair(x-1,y);
            q.push(tmp);
            visited[x-1][y]=true;
        }
        if(isValid(x+1,y,n,m) &&!visited[x+1][y]){
            tmp=make_pair(x+1,y);
            q.push(tmp);
            visited[x+1][y]=true;
        }
        last=s;
    }
    cout<<last.first<<space<<last.second<<endl;
    return 0;
}
