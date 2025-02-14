#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define pb push_back
#define start begin()
#define finish end()
#define max_size 200010

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t,x,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ans=-1;
        vi ar(n+1), index(n+1);
        for(int i=0; i<n; i++){
            cin>>x;
            index[x]=i+1;
            ar[x]++;
        }
        for(int i=1; i<=n; i++){
            if(ar[i]==1){
                ans=index[i];
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
