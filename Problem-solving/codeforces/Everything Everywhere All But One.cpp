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
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n];
        int sum=0,flag=0;
        for(int i=0; i<n; i++){
            cin>>ar[i];
            sum+=ar[i];
        }
        for(int i=0; i<n; i++){
            if((float)(sum-ar[i])/(n-1)==(float)ar[i]){
                flag=1;
                break;
            }
        }
        if(flag) cout<<yes;
        else cout<<no;
    }
    return 0;
}
