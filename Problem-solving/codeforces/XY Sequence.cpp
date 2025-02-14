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
    //fastIO();
    ll t,n,B,x,y;
    cin>>t;
    while(t--){
        cin>>n>>B>>x>>y;
        ll ar[n+2]={0};
        for(int i=1; i<=n; i++){
            ll tmp1=ar[i-1]+x, tmp2=ar[i-1]-y;
            if(tmp1<=B) ar[i]=tmp1;
            else ar[i]=tmp2;
        }
        ll sum=0;
        for(int i=0; i<=n; i++){
            sum+=ar[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
