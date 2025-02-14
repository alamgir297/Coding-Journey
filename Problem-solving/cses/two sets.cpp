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
#define modulo 1000000007
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
        const unsigned int m=1000000007;
        unsigned int mul=1,ans;
        for(int i=1; i<=n; i++){
            mul=(mul*2) % m;
        }
        cout<<mul<<endl;
    }
    return 0;
}
