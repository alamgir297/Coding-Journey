#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define all(v) v.begin(),v.end()
#define start begin()
#define finish end()
#define max_size 40010
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
vi primes;
bool ar[max_size];
void sieve(){
    ll n=max_size;
    primes.pb(2);
    for(int i=3; i<n; i+=2){
        if(!ar[i]){
            primes.pb(i);
            if(i>n/i) continue;
            for(int j=i*i; j<=n; j+=(2*i)) ar[j]=true;
        }
    }
}
void segSieve(ll l, ll r){
    bool mark[r-l+1];
    memset(mark, true, sizeof(mark));
    if(l==1) mark[0]=false;
    for(int i=0; primes[i]*primes[i]<=r; i++){
        ll curPrime=primes[i];
        ll base=curPrime*curPrime;
        if(base<l){
            base=((l-1+curPrime)/curPrime)*curPrime;
        }
        for(int j=base; j<=r; j+=curPrime){
            mark[j-l]=false;
        }
    }
    for(int i=0; i<=r-l; i++){
        if(mark[i]) cout<<i+l<<space;
    }
    newline;
}
int main()
{
    fastIO();
    int t;
    sieve();
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        segSieve(l,r);
    }
    return 0;
}
