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
    int t,n,k,r;
    int a,b,c;
    while(cin>>n){
        if((n&1)==0){
            cout<<4<<space<<n-4<<endl;
        }
        else{
            cout<<9<<space<<n-9<<endl;
        }
    }
    return 0;
}
