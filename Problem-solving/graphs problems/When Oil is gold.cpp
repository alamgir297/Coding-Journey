#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
//#define finish end()
#define max_size 2000000
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
bool isValid(int i,int j,int m, int n){
    if(i<=0 || i>m || j<=0 || j>n) return false;
    return true;
}
int main()
{
//    fastIO();
    int m,n;
    while(cin>>m>>n){
        if(m==0) break;
        queue<pair<int,int>>q;
        pair<int,int>pairr;
        vi dRow={-1,1,-1,1,-1,1,0,0};
        vi dCol={-1,1,1,-1,0,0,-1,1};
        char grid[m+5][n+5];
        bool marked[m+5][n+5];
        memset(marked,false,sizeof(marked));
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                cin>>grid[i][j];
            }
        }
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(grid[i][j]=='*') marked[i][j]=true;
            }
        }
        pair<int,int>last,tmp;
        int cnt=0;
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(!marked[i][j]){
                    q.push({i,j});
                    marked[i][j]=true;
                    cnt++;
                    while(!q.empty()){
                        pair<int,int>s=q.front();
                        q.pop();
                        int x=s.first,y=s.second;
                        marked[x][y]=true;
                        for(int k=0; k<8; k++){
                            int tmpA=x+dRow[k];
                            int tmpB=y+dCol[k];
                            if(isValid(tmpA,tmpB,m,n) &&!marked[tmpA][tmpB]){
                                tmp=make_pair(tmpA,tmpB);
                                q.push(tmp);
                                marked[tmpA][tmpB]=true;
                            }
                        }
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
