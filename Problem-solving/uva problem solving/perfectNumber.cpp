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
#define debug cout<< "here\n"
#define max_size 150000
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
bool pr[max_size];
vll v;
void sieve(){
    int n=max_size;
//    pr[0]=1, pr[1]=1;
//    for(int i=4; i<=n; i+=2) pr[i]=1;
    v.pb(2);
    for(int i=3; i<=n; i+=2){
        if(pr[i]==0){
            v.pb(i);
            if(i>n/i) continue;
            for(int j=i*i; j<=n; j+=(2*i)) pr[j]=1;
        }
    }
}
int main()
{
    fastIO();
    sieve();
    ll n;
    cin>>n;
//    string s;
        ll p; char junk;
    for(int i=0;i<n-1;i++){
        cin>>p>>junk;
        ll t=pow(2, p)-1;
        if(binary_search(v.start, v.finish,p)){
            if(binary_search(v.start, v.finish, t)){
                cout<< "Yes\n";
            }
            else cout<< "No\n";
        }
        else cout<< "No\n";
//        if(!pr[t] && !pr[p]) cout<< "Yes\n";
//        else cout<< "No\n";
    }
    cin>>p;
    ll t=pow(2, p)-1;
    if(binary_search(v.start, v.finish,p)){
        if(binary_search(v.start, v.finish, t)){
            cout<< "Yes\n";
        }
        else cout<< "No\n";
    }
    else cout<< "No\n";
//    if(!pr[t] && !pr[p]) cout<< "Yes\n";
//    else cout<< "No\n";
    return 0;
}
