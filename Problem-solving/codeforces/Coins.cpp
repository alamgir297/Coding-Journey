#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 2000
#define fastIO() ({\
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);\
})
using namespace std;
vll primes;
vector<bool>ar(max_size+3,false);

void seive(){
    ll n=max_size;
    primes.pb(2);
    for(ll i=3; i<n; i+=2){
        if(ar[i]==false){
            primes.pb(i);
            if(i>n/i) continue;
            for(ll j=i*i; j<=n; j+=(i*2)) ar[j]=true;
        }
    }
}
ll largestPfactor(ll n){
    ll mxFactor=0;
    for(int i=0; i<=(n)/2; i++){
        ll curPrime=primes[i];
        if(n%curPrime==0){
            mxFactor=max(mxFactor,curPrime);
            while(n%curPrime==0){
                n/=curPrime;
            }
        }
    }
    return mxFactor;
}
int main()
{
//    fastIO();
    seive();
    ll n;
    while(cin>>n){
        set<ll> ans;
        if(n>1){
            if(binary_search(primes.start, primes.finish, n)){
                cout<<n<<space<<1<<endl;
            }
            else{
                ans.insert(n);
                for(ll i=2; i<=n/2; i++){
                    if(n%i==0){
                        ans.insert(n/i);
                        while(n%i==0){
                            ans.insert(n/i);
                            n/=i;
                        }
                    }
                }
                if(n!=1) ans.insert(1);
                set<ll>::reverse_iterator it;
                for(it=ans.rbegin(); it!=ans.rend(); it++) cout<<*it<<space;
                newline;
            }
        }
        else cout<<1<<endl;
    }
    return 0;
}
