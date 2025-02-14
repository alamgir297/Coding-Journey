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
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll factor=(n+k-1)/k;
//        cout<<factor<<endl;
        k*=factor;
        ll ans=(k+n-1)/n;
        cout<<ans<<endl;
    }
    return 0;
}
