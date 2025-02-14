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
    ll n,t,ans=0;
    cin>>n;
    ll ar[5]={};
    for(int i=0; i<n; i++){
        cin>>t;
        ar[t]++;
    }
    ans+=ar[4];
    if(ar[3]>0){
        if(ar[1]>0){
            if(ar[3]==ar[1]){
                ans+=ar[3];
                ar[1]=0;
            }
            else{
                if(ar[3]>ar[1]){
                    ans+=ar[3];
                    ar[1]=0;
                }
                else{
                    ans+=ar[3];
                    ar[1]-=ar[3];
                }
            }
        }
        else ans+=ar[3];
    }
    if(ar[2]>0){
        if(ar[1]>0){
            ll tmp=ar[2]*2+ar[1]*1;
            if(tmp%4==0) ans+=(tmp/4);
            else ans+=((tmp/4)+1);
            ar[1]=0;
        }
        else{
            ll tmp=ar[2]*2;
            if(tmp%4==0) ans+=(tmp/4);
            else ans+=((tmp/4)+1);
        }
    }
    if(ar[1]>0){
        ll tmp=ar[1]*1;
        if(tmp%4==0) ans+=(tmp/4);
        else ans+=((tmp/4)+1);
    }
    cout<<ans<<endl;
    return 0;
}
