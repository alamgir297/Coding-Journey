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
    //fastIO();
    ll n,k,x;
    while(cin>>n){
        cin>>k;
        ll ar[n], curr_sum=0, minn=INT_MAX,ans;
        for(int i=1; i<=n; i++) cin>>ar[i];
        for(int i=1; i<=k; i++){
            curr_sum+=ar[i];
        }
        for(int i=k+1; i<=n; i++){
            if(curr_sum<minn){
                minn=curr_sum;
                ans=i-1;
            }
            curr_sum=(curr_sum+ar[i]-ar[i-k]);
        }
        if(curr_sum<minn) ans=n;
        cout<<ans-(k-1)<<endl;
    }
    return 0;
}
