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
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int flag=0, cnt[n]={0};
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            cnt[x]++;
        }
        for(int i=0; i<=n; i++){
            if(cnt[i]>=3){
                cout<<i<<endl;
                flag=1;
                break;
            }
        }
        if(!flag) cout<< "-1\n";
    }
    return 0;
}
