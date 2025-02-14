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
bool is_integer(float n){
    if(n==(int)n) return true;
    return false;
}
int main()
{
    //fastIO();
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        int x0=x, y0=y;
        int ans=0,flag=0;
        float tmp=(float)sqrt((x*x)+(y*y));
        if(x==0 && y==0) cout<<0<<endl;
        else if(is_integer(tmp)) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
