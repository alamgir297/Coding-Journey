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
    int t;
    cin>>t;
    int i=1;
    while(t--){
        int n;
        cin>>n;
        int cnt=0,a,b;
        cin>>a>>b;
        cnt+=a;
        cnt-=b;
        int ans=cnt;
        for(int i=1; i<n-1; i++){
            cin>>a>>b;
            cnt-=b;
            cnt+=a;
            ans=max(cnt,ans);
        }
        cout<< "Case "<<i<< ": "<<ans<<endl;
        i++;
    }
    return 0;
}
