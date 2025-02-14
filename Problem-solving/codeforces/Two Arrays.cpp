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
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n],br[n],ans=1;
        for(int i=0; i<n; i++) cin>>ar[i];
        for(int i=0; i<n; i++) cin>>br[i];
        sort(ar,ar+n);
        sort(br,br+n);
        for(int i=0; i<n; i++){
            if(ar[i]!=br[i]){
                ar[i]++;
                if(ar[i]!=br[i]) ans=0;
            }
        }
        if(ans) cout<<yes;
        else cout<<no;
    }
    return 0;
}
