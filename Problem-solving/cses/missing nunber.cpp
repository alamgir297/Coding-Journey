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
    vi v;
    for(int i=0; i<n-1; i++){
        int x;
        cin>>x;
        v.pb(x);
        v.pb(i+1);
    }
    v.pb(n);
    int ans=0;
    for(int i=0; i<v.size(); i++){
        ans^=v[i];
    }
    cout<<ans<<endl;
    return 0;
}
