#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define PB push_back
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
//ll calculate(ll ar[], ll cop){
//    ll discount=0, total=0;
//    for(int i=0; i<cop-1; i++){
//        discount+=ar[i];
//    }
//    return discount;
//
//}
int main()
{
    fastIO();
    ll n,m,x,ans,total=0;
    cin>>n;
    ll ar[n];
    for(int i=0; i<n; i++) cin>>ar[i];
    cin>>m;
    ll cr[m];
    for(int i=0; i<m; i++) cin>>cr[i];
    sort(ar, ar+n, greater<ll>());
    for(int i=0; i<n; i++) total+=ar[i];
    for(int i=0; i<m; i++){
        ll cop=cr[i]-1;
//        x=calculate(ar, cop);
        ans=total-ar[cop];
        cout<<ans<<endl;
    }
    return 0;
}
