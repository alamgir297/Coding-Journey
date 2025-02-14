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
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string s= "";
        if((n==k && n!=1) || (n!=(2*k) && k!=1)) cout<<-1<<endl;
        else if(k==1){
            for(int i=0; i<n; i++) cout<<'a';
            newline;
        }
        else{
            for(int i=0; i<)
        }
    }
    return 0;
}
