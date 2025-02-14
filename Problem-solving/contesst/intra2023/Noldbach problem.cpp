#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define pb push_back
#define start begin()
#define finish end()
#define max_size 100000000

using namespace std;
vector<ll> v;
void seive(){
    vector<bool>ar(max_size+1,false);
    ll n=max_size;
    v.pb(2);
    for(ll i=3; i<n; i+=2){
        if(ar[i]==false){
            v.pb(i);
            if(i>n/i) continue;
            for(ll j=i*i; j<=n; j+=(2*i)) ar[j]=true;
        }
    }
}
bool isPrime(int n){
    if(binary_search(v.start, v.finish, n)) return true;
    return false;
}
int calculate(int m, int k){
    vi ans;
    for(int i=0; v[i]<=m; i++){
        int n=v[i]+v[i+1]+1;
        if(isPrime(n) && n<=m) ans.pb(n);
    }
    if(ans.size()>=k) return 1;
    return 0;
}
void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    seive();
    int t,k;
    cin>>t;
    while(t--){
        cin>>k;
        cout<<v[k-1]<<endl;
    }
    return 0;
}
