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
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int n,m,numofisland=0;
        cin>>n>>m;
        vi dRow={-1,1,-1,1,-1,1,0,0};
        vi dCol={-1,1,1,-1,0,0,-1,1};
        char maps[n+2][m+2];
        bool sea[n+2][m+2];
        vi survived, vHumans, vShelters;
        memset(sea, false, sizeof(sea));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>maps[i][j];
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(maps[i][j]=='.') sea[i][j]=true;
            }
        }
        queue<pair<int,int>> q;
        pair<int,int> pairr,tmp;
        int human=0, shelters=0,survivors=0,consumed=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(!sea[i][j]){
                    numofisland++;
                    q.push({i,j});
                    sea[i][j]=true;
                    while(!q.empty()){
                        pairr=q.front();
                        q.pop();
                        int x=pairr.first, y=pairr.second;
                        sea[x][y]=true;
                        for(int i=0; i<8; i++){
                            int a=x+dRow[i], b=y+dCol[i];
                            if(isValid(a,b,n,m) && !sea[a][b]){
                                tmp=make_pair(a,b);
                                q.push(tmp);
                                sea[a][b]=true;
                                if(maps[a][b]=='H') human++;
                                if(isdigit(maps[a][b])) shelters+=(maps[a][b]-'0');
                            }
                        }
                    }
                    survivors=min(human,shelters);
                    consumed=(human-shelters);
                    if(consumed>(human/2)) survivors=0;
                    survived.pb(survivors);
                    vHumans.pb(human), vShelters.pb(shelters);
                    human=0, shelters=0;
                }
            }
        }
        int ans=0,totHuman=0,totShel;
        for(int i=0; i<survived.size(); i++) ans+=survived[i];
        if(ans>1) cout<< "Case #"<<i<<": There are "<<ans<< " survivors.\n";
        else if(ans==1) cout<< "Case #"<<i<< ": There is 1 survivor.\n";
        else cout<< "Case #"<<i<< ": There is no survivor.\n";
    }
    return 0;
}
