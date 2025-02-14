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
        map<int,int> cnt;
        int a=0,b=0;
        set<int>st;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            cnt[x]++;
        }
        int flag=0;
        for(int i=1; i<=n; i++){
            if(cnt[i]>1){
                flag=1;
                break;
            }
        }
        if((n&1)==1 && !flag){
            cout<< "NO\n";
        }
        else cout<< "YES\n";

    }
    return 0;
}
