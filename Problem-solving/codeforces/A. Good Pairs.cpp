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
    ll n,t;
    cin>>t;
    while(t--){
        cin>>n;
        ll ar[n+2], minn=INT_MAX,maxx=-1,x;
        int ax=1,ay=1;
        cin>>x;
        minn=min(x,minn), maxx=max(x,maxx);
        for(int i=1; i<n; i++){
            cin>>x;
            if(x>maxx){
                maxx=x;
                ay=i+1;
            }
            if(x<minn){
                minn=x;
                ax=i+1;
            }
        }
        cout<<ax<< " "<<ay<<endl;
    }
    return 0;
}
