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
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
bool valid(int n,int m,int a, int b){
    if(a<0||b<0||a>=n||b>=m) return false;
    return true;
}
int main()
{
    fastIO();
    int n,m;
     int row[]={-1,1,0,0};
    int col[]={0,0,-1,1};
    while(cin>>n>>m){
        char ar[n][m];
        bool vis[n][m];
        queue<pair<int,int>>q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>ar[i][j];
                if(ar[i][j]=='#') vis[i][j]=true;
                else vis[i][j]=false;
            }
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j]){
//                    cout<<i<<space<<j<<endl;
                    q.push({i,j});
                    vis[i][j]=true;
                    while(!q.empty()){
                        pair<int,int> p=q.front();
                        q.pop();
                        auto[a,b]=p;
                        vis[a][b]=true;
                        int r,c;
//                        cout<< a<<space<<b<<endl;
                        for(int i=0; i<4; i++){
                            r=a+row[i], c=b+col[i];
                            if(valid(n,m,r,c)&& !vis[r][c]){
//                                cout<<r<<space<<c<<endl;
                                q.push({r,c});
                                vis[r][c]=true;
                            }
                        }
                    }
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
