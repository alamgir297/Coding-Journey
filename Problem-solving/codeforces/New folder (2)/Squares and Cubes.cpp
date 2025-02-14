#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    ll t,n;
    ll x,a,b;
    cin>>t;
    while(t--){
        set<ll>v;
        cin>>x; n=x;
        int cnt=0;
        for(int i=1; i<=sqrt(n); i++){
            a=i*i;
            if(a<=x && a>0){
                v.insert(a);
//                cout<<a<<endl;
            }
        }
        for(int i=1; i<=cbrt(n); i++){
            b=i*i*i;
            if(b<=x &&b>0){
                    v.insert(b);
//                cout<<b<<endl;
            }
        }
        cout<<v.size()<<endl;
        v.clear();
    }
    return 0;
}
