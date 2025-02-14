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
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        set<pair<int,int>> sett;
        int i=1, j=n-1,cnt=0;
        while(i<=j){
            if(i+j==n){
                int gcd=__gcd(i,j), product=i*j;
                int lcm=product/gcd;
                if(gcd+lcm==n){
                    cnt++;
                    pair<int,int> pairr=make_pair(j,i);
                    if(i!=j)
                        sett.insert(pairr);
                }

            }
            i++, j--;
        }
        cout<<cnt+sett.size()<<endl;
    }
    return 0;
}
