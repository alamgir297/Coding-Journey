#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define pb push_back
#define start begin()
#define finish end()
//#define max_size 10000

using namespace std;
vector<ll>primes;
void seive(ll n){
    ll max_size=sqrt(n);
    vector<bool> ar(max_size+1, false);
    primes.pb(2);
    for(ll i=3; i<=max_size+1; i+=2){
        if(ar[i]==false){
            primes.pb(i);
            if(i>n/i) continue;
            for(ll j=i*i; j<=max_size; j+=(2*i)) ar[j]=true;
        }
    }
}
void segSeive(ll l, ll r){
    seive(r);
    vector<bool> ar(r-l+1,false);
    if(l==1)ar[0]=true;
    for(ll i=0; primes[i]*primes[i]<=(r); i++){
        ll currentPrime=primes[i];
        ll base=(l/currentPrime)*currentPrime;
        if(base<l) base+=currentPrime;
        for(ll j=base; j<=r; j+=currentPrime){
            if(j-l>=0)ar[j-l]=true;
        }
        if(base==currentPrime) ar[base-l]=false;
    }
    for(ll i=l; i<=r; i++){
        if(ar[i-l]==false) cout<<i<<endl;
    }
    newline;
}
void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
//    fastIO();
    ll l,r,t;
    cin>>t;
    while(t--){
        cin>>l>>r;
        segSeive(l, r);
    }
    return 0;
}
