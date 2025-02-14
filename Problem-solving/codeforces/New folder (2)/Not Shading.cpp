#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t,n,m,r,c,flag,f2,f3,ans;
    cin>>t;
    while(t--){
        cin>>n>>m>>r>>c;
        r--,c--,flag=0,f2=0,f3=0;
        char ch[n][m];
        for(int i=0;i<n; i++){
            for(int j=0; j<m; j++){
                cin>>ch[i][j];
            }
        }
        for(int i=0;i<n; i++){
            if(flag) break;
            for(int j=0; j<m; j++){
                if(ch[r][c]=='B'){
                    f2=1;
                    f3=1;
                    flag=1;
                    ans=0;
                    break;
                }
                else{
                    if(ch[i][j]=='B'){
                        f2=1;
                        if(i==r || j==c){
                            flag=1;
                            f3=1;
                            ans=1;
                            break;
                        }
                    }
                }
            }
        }
        if(f2 && !f3) ans=2;
        if(!f2) ans=-1;
        cout<<ans<<endl;
    }
    return 0;
}
