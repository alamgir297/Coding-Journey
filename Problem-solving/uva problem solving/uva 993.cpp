#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 1e10
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
ll n_sum(ll n){
    return (n*(n+1))/2;
}
int main()
{
//    fastIO();
    ll t;
    cin>>t;
    while(t--){
        ll x,y,target;
        cin>>x>>y;
        target=x+y;
        ll beg=0, end=max_size;
        while(beg<end){
            ll mid=(beg+end)/2;
            if(n_sum(mid)>=target){
                end=mid;
            }
            else
                beg=mid+1;
        }
        cout<<beg<<endl;
    }
    return 0;
}
