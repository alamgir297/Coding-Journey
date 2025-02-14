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
    ll n;
    while(cin>>n){
        ll ar[n];
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        ll curr_sum=ar[0], mxSum=ar[0];
        for(int i=1; i<n; i++){
            curr_sum=max(ar[i], curr_sum+ar[i]);
            mxSum=max(curr_sum, mxSum);
        }
        cout<<mxSum<<endl;
    }
    return 0;
}
