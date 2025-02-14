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
#define max_size 100010
#define yes "YES\n"
#define no "NO\n"
#define debug cout<< "here\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
int row[]={-1,1,0,0};
int col[]={0,0,-1,1};
bool isValid(int n, int m, int a, int b){
    if(a<0 || b<0 || a>n || b>m) return false;
    return true;
}
int main()
{
//    fastIO();
    int n, m;
    cin>>n>>m;
    char labyrinth[n][m];
    bool vis[n][m];
    queue<pair<int,int>>q;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char c;
            cin>>c;
            if(c=='A') q.push({i,j});
            if(c=='#') vis[i][j]=true;

        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char c=labyrinth[i][j];
            if(c=='M') q.push({i,j});
        }
    }
    while(!q.empty()){
        auto[a,b]=q.front();
        q.pop();

    }

    return 0;
}
