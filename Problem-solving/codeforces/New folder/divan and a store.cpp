#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    ll n,l,r,k,x;
    int t;
    vector<ll> v;;
    cin>>t;
    while(t--){
        int cnt=0,sum=0;
        cin>>n>>l;
        cin>>r>>k;
        for(int i=0; i<n; i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            if(v[i]>=l && v[i]<=r){
                sum+=v[i];
                if(sum<=k) cnt++;
                else break;
            }
        }
        cout<<cnt<<endl;
        v.clear();
    }
    return 0;
}
