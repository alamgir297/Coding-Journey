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
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll ar[n+5];
        for(int i=0; i<n; i++) cin>>ar[i];
        sort(ar, ar+n, greater<int>());
        cout<<ar[0]+ar[1]<<endl;
    }
    return 0;
}
