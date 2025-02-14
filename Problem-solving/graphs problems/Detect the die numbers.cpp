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
bool isValid(int i,int j,int h, int w){
    if(i<=0 || i>h || j<=0 || j>w) return false;
    return true;
}
int main()
{
//    fastIO();
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int w,h;
    cin>>w>>h;
    queue<pair<int,int>>q_die, q_num;
    vi ans;
    vi dRow={-1,1,0,0};
    vi dCol={0,0,-1,1};
    pair<int,int>pairr;
    char image[h+5][w+5];
    bool background[h+5][w+5];
    memset(background,false,sizeof(background));
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            cin>>image[i][j];
        }
    }
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            if(image[i][j]=='.') background[i][j]=true;
        }
    }
    int cnt=0,numOfDie=0;
    pair<int,int>last,tmp;
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            if(!background[i][j]){
                numOfDie++;
                q_die.push({i,j});
                background[i][j]=true;
                while(!q_die.empty()){
                    pair<int,int>s=q_die.front();
                    q_die.pop();
                    int x=s.first, y=s.second;
                    background[x][y]=true;
                    for(int i=0; i<4; i++){
                        int tX=x+dRow[i], tY=y+dCol[i];
                        if(isValid(tX,tY,h,w) &&image[tX][tY]=='X'){
                            q_num.push({tX,tY});
                            image[tX][tY]='*';
                            while(!q_num.empty()){
                                pair<int,int>n=q_num.front();
                                q_num.pop();
                                int a=n.first,b=n.second;
                                image[a][b]='*';
                                for(int i=0;i<4;i++){
                                    int tA=a+dRow[i], tB=b+dCol[i];
                                    if(isValid(tA,tB,h,w) && image[tA][tB]=='X'){
                                        tmp=make_pair(tA,tB);
                                        q_num.push(tmp);
                                        image[tA][tB]='*';
                                    }
                                }
                            }
                            cnt++;
                            cout<< "cnt "<<cnt<<endl;
                        }
                        if(isValid(tX,tY,h,w) && !background[tX,tY]){
                            tmp=make_pair(tX,tY);
                            q_die.push(tmp);
                            background[tX][tY]=true;
                        }
                    }
                }
                if(cnt>0)
                    ans.pb(cnt);
                cnt=0;
            }
        }
    }
    cout<< "no die "<<numOfDie<<endl;
    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<space;
    newline;

    return 0;
}
