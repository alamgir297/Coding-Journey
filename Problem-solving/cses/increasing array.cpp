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
    int n;
    cin>>n;
    int ar[n+5];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    ll ans=0;
    for(int i=1; i<n; i++){
        if(ar[i]<ar[i-1]){
            ans+=(ar[i-1]-ar[i]);
            ar[i]=ar[i-1];
        }
    }
    cout<<ans<<endl;

    return 0;
}
