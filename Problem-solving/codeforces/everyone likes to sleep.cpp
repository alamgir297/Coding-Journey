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
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        vector<int>set;
        int i=9;
        while(s!=0){
            if((s-i>=i)){
                s-=i;
                set.pb(i);
            }
            else if((s-i)>=0 && (s-i)<i){
                if(s-i>0) set.pb(s-i);
                set.pb(i);
                s=0;
            }
            i--;
        }
        sort(set.start, set.finish);
        for(int i=0; i<set.size(); i++) cout<<set[i];
        newline;
    }
    return 0;
}
