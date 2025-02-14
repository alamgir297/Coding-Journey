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
        int sum=0;
        vi divisors;
        for(int i=1; i<=n/2; i++){
            if(n%i==0) divisors.pb(i);
        }
        divisors.pb(n);
        for(int i=0; i<divisors.size(); i++) sum+=divisors[i];
        cout<<sum<<endl;
    }
    return 0;
}
