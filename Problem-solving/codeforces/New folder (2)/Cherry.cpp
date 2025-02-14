#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    ll t,n,product,maxVal;
    cin>>t;
    vector<ll>v;
    while(t--){
            maxVal=0;
        cin>>n;
        ll ar[n];
        for(int i=0; i<n; i++) cin>>ar[i];
        for(int i=0; i<n-1; i++){
            product=ar[i]*ar[i+1];
//            cout<<product<<endl;
            if(product>maxVal) maxVal=product;
        }
        cout<<maxVal<<endl;
    }
    return 0;
}
