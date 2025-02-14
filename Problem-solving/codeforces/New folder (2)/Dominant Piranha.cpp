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
    ll t,n,x;
    cin>>t;
    while(t--){
        ll dominant=0, flag=0;
        cin>>n;
        vector<ll>v;
        for(int i=0; i<n; i++){
            cin>>x;
            v.pb(x);
            dominant=max(x, dominant);
        }
        for(int i=0; i<n; i++){
            if(v[i]==dominant){
                if(v[i+1]!=dominant && i+1<n){
                    cout<<i+1<<endl;
                    flag=1;
                    break;
                }
                else if(v[i-1]!=dominant && i-1>=0){
                    cout<<i+1<<endl;
                    flag=1;
                    break;
                }
                else flag=0;
            }
        }
        if(!flag) cout<<-1<<endl;
    }
    return 0;
}
