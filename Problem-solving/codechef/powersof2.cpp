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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=1, cnt=0;
        for(int i=1; i<32; i++){
            int k=(1<<(i-1));
            if(n&k) cnt++;
        }
        cout<<cnt-1<<endl;
    }
    return 0;
}
