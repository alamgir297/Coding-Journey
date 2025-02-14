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

int main()
{
    fastIO();
    vi dRow={-1,1,0,0};
    vi dCol={0,0,-1,1};
    int n;
    vector<pair<int,int>>pairs;
    map<pair<int,int>, pair<int,int>> mapp;
    queue<pair<int,int>>q;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        pairs.pb({x,y});

    }
    set<pair<int,int>>sett(pairs.start,pairs.finish);
    int flag=0;
    for(auto it: pairs){
        int a=it.first,b=it.second;
        for(int i=0; i<4; i++){
            int x=it.first+dRow[i], y=it.second+dCol[i];
            if(sett.count({x,y})) continue;
            mapp[{a,b}]={x,y};
            q.push({a,b});
            break;
        }
    }
    while(!q.empty()){
        auto s=q.front();
        int x=s.first, y=s.second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx=x+dRow[i], ny=y+dCol[i];
            if(!sett.count({nx,ny}) || mapp.count({nx,ny})) continue;
            mapp[{nx,ny}]=mapp[{x,y}];
            q.push({nx,ny});
        }
    }
    for(auto it:pairs){
        int x=it.first, y=it.second;
        cout<<mapp[{x,y}].first<<space<<mapp[{x,y}].second<<endl;
    }
    return 0;
}
