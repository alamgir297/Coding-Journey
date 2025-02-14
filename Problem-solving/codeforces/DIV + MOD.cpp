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
    //fastIO();
    int t;
    cin>>t;
    while(t--){
        int l,r,a,ans;
        cin>>l>>r>>a;
        if(r%a==0){
            if(a-1>=l){
                ans=max((a-1)/a+(a-1)%a, (r-1)/a+(r-1)%a);
            }
            else
                ans=max((r-1)/a+(r-1)%a, r/a+r%a);
        }
        else{
            if(a-1>=l){
                ans=max((a-1)/a+(a-1)%a, r/a+(r)%a);
            }
            else
                ans=(r/a)+r%a;
        }
        cout<<ans<<endl;
    }
    return 0;
}
