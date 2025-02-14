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
#define max_size 2000000
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
bool valid(int n, int m, int a, int b){
    if(a<0 || b<0 || a>=n || b>=m) return false;
    return true;
}
int main()
{
    fastIO();
    int n,m;
    pair<int,int>dest,strt;
    while(cin>>n>>m){
        char mp[n][m];
        bool vis[n][m];
        qpair q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>mp[i][j];
                if(mp[i][j]=='#') vis[i][j]=true;
                else vis[i][j]=false;
            }
        }
        string ans="";
        vector<pair<int,int>>vp;
        map<pair<int,int>,pair<int,int>>parents;
        int flag=0,ok=0;
        for(int i=0; i<n; i++){
            if(flag) break;
            for(int j=0; j<m; j++){
                if(flag) break;
                if(mp[i][j]=='A'){
                    strt={i,j};
                    q.push({i,j});
                    vis[i][j]=true;
                    while(!q.empty()){
                        if(flag) break;
                        pair<int,int> p=q.front();
                        q.pop();
                        auto[a,b]=p;
                        int r,c;
                        for(int i=0; i<4; i++){
                            r=a+row[i],c=b+col[i];
                             if(valid(n,m,r,c) && !vis[r][c]){
                                if(mp[r][c]=='B'){
                                    flag=1;
                                    dest={r,c};
                                    parents[{r,c}]={a,b};
                                    break;
                                }
                                q.push({r,c});
                                vis[r][c]=true;
                                parents[{r,c}]={a,b};
                                ok=1;

                            }
                        }
                    }
                }
            }
        }
        if(flag){
            vp.pb(dest);
            pair<int,int>tmp=dest;
            while(parents[tmp]!=strt){
                vp.pb(parents[tmp]);
                tmp=parents[tmp];
            }
            vp.pb(strt);
            reverse(vp.begin(),vp.end());
            for(int i=0; i<vp.size(); i++){
                if(i+1<vp.size()){
                    auto[a,b]=vp[i];
                    auto[c,d]=vp[i+1];
                    if(a==c && d<b) ans+="L";
                    if(a==c && d>b) ans+="R";
                    if(a<c && d==b) ans+="D";
                    if(a>c && d==b) ans+="U";
                }
            }
            cout<<yes<<ans.size()<<endl<<ans<<endl;
        }
        else cout<<no;
    }
    return 0;
}
