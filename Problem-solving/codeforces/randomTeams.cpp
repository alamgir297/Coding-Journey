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
int row[]={-1,1,0,0};
int col[]={0,0,-1,1};
int sz=0;
bool vis[100000+10][66];
string cnv2Bin(ll n){
    string s=""; int c=1;
    while(n!=0){
        int d=n%2;
        string st=to_string(d);
        s+=st;
        n/=2;
//        cout<<s<<endl;
    }
    reverse(s.begin(),s.end());
    return s;
}
int valid(int n, int m,int a,int b){
    if(a>=n || b>=m || a<0 || b<0) return 0;
    return 1;
}
int main()
{
    fastIO();
    ll n;
    cin>>n;
    ll ar[n+1];
    vector<string>vs;
    for(int i=0; i<n; i++){
        cin>>ar[i];
        vs.push_back(cnv2Bin(ar[i]));
    }
    for(int i=0; i<vs.size(); i++){
            int x=vs[i].size();
        sz=max(sz, x);
    }
    bool mp[n][sz];
    for(int i=0; i<n; i++){
        string s=vs[i];
        if(s.size()<sz){
            for(int i=0; i<=sz-s.size(); i++){
                s='0'+s;
            }
        }
        for(int j=0; j<sz; j++){
            if(s[j]=='0') mp[i][j]=0;
            else mp[i][j]=1;
        }
    }
    bool ans=false;
    queue<pair<int,int>>q;
    q.push({0,0});
    vis[0][0]=true;
    while(!q.empty()){
        pair<int,int>p;
        p=q.front();
        int a,b;
        a=p.first, b=p.second;
//        cout<<a<<space<<b<<endl;
        q.pop();
        for(int i=0; i<4; i++){
            int x=a+row[i];
            int y=b+col[i];
//            cout<<x<<space<<y<<space<<a<<space<<b<<endl;
            if(valid(n, sz, x, y) && !vis[x][y] && mp[x][y]==mp[0][0]){
                vis[x][y]=true;
                q.push({x,y});
            }
        }
    }
//    for(int i=0; i<n; i++){
//        for(int j=0; j<sz; j++){
//            cout<<vis[i][j]<<space;
//        }
//        newline;
//    }
//    cout<<vis[n-1][sz-1]<< " vis\n";
    ans=vis[n-1][sz-1];
    if(ans==true) cout<< "Yeeee! ice-cream.\n";
    else cout<< "Let's make ice-cream.\n";
    return 0;
}
