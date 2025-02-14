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
    ll t,a,b,x,y;
    cin>>t;
    while(t--){
        cin>>a>>b>>x>>y;
        if((x*y)>=(a*b)) cout<< "YES\n";
        else cout<< "NO\n";
    }
    return 0;
}
