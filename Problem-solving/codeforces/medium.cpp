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
//    fastIO();
    int ar[5];
    int t;
    cin>>t;
    while(t--){
        for(int i=0; i<3; i++) cin>>ar[i];
        sort(ar,ar+3);
        cout<<ar[1]<<endl;
    }
    return 0;
}
