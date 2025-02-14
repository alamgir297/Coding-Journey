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
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n], ans=0;
        for(int i=1; i<=n; i++) cin>>ar[i];
        for(int i=1; i<=n; i++){
            ans=max(ans, ar[i]-i);
        }
        cout<<ans<<endl;
    }
    return 0;
}
