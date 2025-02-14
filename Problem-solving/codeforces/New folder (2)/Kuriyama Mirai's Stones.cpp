#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    ll n,x,m,total=0,type,l,r;
    cin>>n;
    vector<ll>v,v2;
    for(int i=0;i<n; i++){
        cin>>x;
        v.pb(x);
        total+=x;
    }
    v2=v;
    sort(v2.start, v2.finish);
    ll sum=0, sumSorted=0;
    for(int i=0; i<n; i++){
        sum+=v[i];
        v[i]=sum;
        sumSorted+=v2[i];
        v2[i]=sumSorted;
    }
    cin>>m;
    while(m--){
        ll ans;
        cin>>type>>l>>r;
        if(type==1){
            if(l==1) ans=v[r-1];
            else{
                ans=v[r-1]-v[l-2];
            }
        }
        if(type==2){
            if(l==1) ans=v2[r-1];
            else{
                ans=v2[r-1]-v2[l-2];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
