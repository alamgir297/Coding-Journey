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
//    fastIO();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n],cnt=0;
        for(int i=0; i<n; i++) cin>>ar[i];
        for(int i=1; i<n-1; i++){
            if(ar[i]>ar[i-1] && ar[i]>ar[i+1]){
                int tmp=ar[i];
                for(int j=i+2; j<n-1; j++){
                    if(ar[j]>ar[j-1] && ar[j]>ar[j+1] ){
                       tmp=max(tmp, ar[j]);
                        break;
                    }
                }
                ar[i+1]=tmp;
                cnt++;
            }
        }
        cout<<cnt<<endl;
        for(int i=0; i<n; i++) cout<<ar[i]<<space;
        newline;
    }
    return 0;
}
