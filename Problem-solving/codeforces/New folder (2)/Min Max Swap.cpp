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
        int ar[n], br[n];
        for(int i=0; i<n; i++) cin>>ar[i];
        for(int i=0; i<n; i++) cin>>br[i];
        for(int i=0; i<n; i++){
            if(ar[i]>br[i]) swap(ar[i], br[i]);
        }
        sort(ar, ar+n, greater<int>());
        sort(br, br+n, greater<int>());
        cout<<ar[0]*br[0]<<endl;

    }
    return 0;
}
