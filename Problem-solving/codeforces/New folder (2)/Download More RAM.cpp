#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define pb push_back
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll ar[n], br[n];
        bool mark[n]={false};
        for(int i=0;i<n; i++) cin>>ar[i];
        for(int i=0;i<n; i++) cin>>br[i];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(k>=ar[j] && mark[j]==false){
                    k+=br[j];
                    mark[j]=true;
                    break;
                }
            }
        }
        cout<<k<<endl;

    }
    return 0;
}
