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
#define fastIO() ({\
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);\
})

using namespace std;

int main()
{
    fastIO();
    ll t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0) cout<<0<<endl;
        else{
            ll tmp=(a/b+1)*b;
            ll ans=tmp-a;
            cout<<ans<<endl;
        }
    }
    return 0;
}
