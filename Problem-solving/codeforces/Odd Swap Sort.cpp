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
#define fastIO() ({\
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);\
})

using namespace std;

int main()
{
    fastIO();
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vll v;
        ll tmp,sorted=1;
        cin>>tmp;
        v.pb(tmp);
        n--;
        for(int i=0;i<n; i++){
            ll x;
            cin>>x;
            if(tmp>x){
                sorted=0;
            }
            tmp=x;
            v.pb(x);
        }
        n++;
        int flag=0,even=0,odd=1;
        if(sorted==1) flag=0;
        else{
            for(int i=0; i<n;i++){
                if(v[i]%2==0){
                    if(v[i]>=even) even=v[i];
                    else{
                        flag=1;
                        break;
                    }
                }
                else{
                    if(v[i]>=odd) odd=v[i];
                    else{
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(!flag) cout<< "YES\n";
        else cout<< "NO\n";
    }
    return 0;
}
