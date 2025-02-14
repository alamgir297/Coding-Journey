#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    ll t,x1,x2,p1,p2;
    cin>>t;
    while(t--){
        string ans;
        cin>>x1>>p1>>x2>>p2;
        ll minn=min(p1,p2);
        p1-=minn;
        p2-=minn;
        if(p1>=7) ans=">";
        else if(p2>=7) ans="<";
        else{
            for(int i=0; i<p1; i++) x1*=10;
            for(int i=0; i<p2; i++) x2*=10;
            if(x1>x2) ans=">";
            else if(x1<x2) ans="<";
            else ans="=";
        }
        cout<<ans<<endl;
    }
    return 0;
}
