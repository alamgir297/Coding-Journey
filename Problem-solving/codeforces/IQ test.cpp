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
    int n;
    while(cin>>n){
        vi v;
        int odd=0,even=0,iEven,iOdd;
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            if(x%2==0){
                even++;
                iEven=i;
            }
            else{
                odd++;
                iOdd=i;
            }
        }
        if(even==1) cout<<iEven<<endl;
        else if(odd==1) cout<<iOdd<<endl;
    }
    return 0;
}
