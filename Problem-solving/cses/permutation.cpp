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
    int n;
    while(cin>>n){
        vi v;
        if(n<4 && n!=1) cout<<"NO SOLUTION\n";
        else{
            for(int i=2; i<=n; i+=2){
                v.pb(i);
            }
            for(int i=1; i<=n; i+=2){
                v.pb(i);
            }
            for(int i=0; i<v.size(); i++){
                cout<<v[i]<<space;
            }
            newline;
        }
    }
    return 0;
}
