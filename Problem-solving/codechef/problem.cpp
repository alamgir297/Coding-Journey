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
bool valid(int a, int b){
    if(a<1 || b<1 || a>8 || b>8) return false;
    return true;
}
int main()
{
    //fastIO();
    int t;
    int a,b,n,c,d;
    bool ar[8][8];
    for(int i=1; i<=8; i++){
        for(int j=1; j<=8; j++){
            ar[i][j]=0;
        }
    }
    cin>>t;
    while(t--){
        int flag=0;
        set<pair<int,int>>sett;
        cin>>a>>b>>c>>d;
        if(valid(a-1, b+2))
            sett.insert({a-1,b+2});
        if(valid(a-1, b-2))
            sett.insert({a-1,b-2});
        if(valid(a+1, b+2))
            sett.insert({a+1,b+2});
        if(valid(a+1,b-2))
            sett.insert({a+1,b-2});
        if(valid(a-2, b+1))
            sett.insert({a-2,b+1});
        if(valid(a-2, b-1))
            sett.insert({a-2,b-1});
        if(valid(a+2, b+1))
            sett.insert({a+2,b+1});
        if(valid(a+2, b-1))
            sett.insert({a+2,b-1});
        if(valid(c-1, d+2)){
            if(sett.count({c-1,d+2}))
                flag=1;
        }
         if(valid(c-1, d-2)){
            if(sett.count({c-1, d-2})) flag=1;
        }
         if(valid(c+1, d-2)){
            if(sett.count({c+1, d-2})) flag=1;
        }
         if(valid(c+1, d+2)){
            if(sett.count({c+1, d+2})) flag=1;
        }
         if(valid(c-2, d+1)){
            if(sett.count({c-2, d+1})) flag=1;
        }
         if(valid(c-2, d-1)){
            if(sett.count({c-2, d-1})) flag=1;
        }
         if(valid(c+2, d-1)){
            if(sett.count({c+2, d-1})) flag=1;
        }
         if(valid(c+2, d+1)){
            if(sett.count({c+2, d+1})) flag=1;
        }

        if(flag) cout<<yes;
        else cout<<no;
    }
    return 0;
}
