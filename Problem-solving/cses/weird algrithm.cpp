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
    cin>>n;
    vll v;
    v.pb(n);
    while(n!=1){
        if((n&1)==0){
            n/=2;
            v.pb(n);
        }
        else{
            n=(n*3)+1;
            v.pb(n);
        }
    }
    if(n==1){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<space;
        }
        newline;
    }
    return 0;
}
