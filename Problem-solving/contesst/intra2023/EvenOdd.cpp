#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define all(v) v.begin(),v.end()
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
    ll  n;
    cin>>n;
    bitset<64> bit;
    ll arr[n+3],preEven[n+3], preOdd[n+3],cntOdd=0, cntEven=0,q;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        bit=x;
        ll cnt=bit.count();
//        ll cnt=__builtin_popcountll(x);
        if( (cnt&1)==0){
            cntEven++;
            preEven[i]=cntEven;
            preOdd[i]=cntOdd;
        }
        else{
            cntOdd++;
            preOdd[i]=cntOdd;
            preEven[i]=cntEven;

        }
    }
//    for(int i=0; i<n; i++){
//        if(arr[i]==0){
//            cntOdd++;
//            preOdd[i]=cntOdd;
//            preEven[i]=cntEven;
//        }
//        else{
//            cntEven++;
//            preEven[i]=cntEven;
//            preOdd[i]=cntOdd;
//        }
//    }
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        l--,r--;
        if(l==0) cout<<preEven[r]<<space<<preOdd[r]<<endl;
        else{
            cout<<preEven[r]-preEven[l-1]<<space<<preOdd[r]-preOdd[l-1]<<endl;
        }
    }
    return 0;
}
