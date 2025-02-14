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
        string s1,s2;
        cin>>n>>s1>>s2;
        int flag=1;
        for(int i=0; i<s1.size(); i++){
            if((s1[i]==s2[i])) continue;
            if(s1[i]=='R' && s2[i]!='R'){
                flag=0;
                break;
            }
            if((s1[i]=='G') && (s2[i]!='B')){
                flag=0;
                break;
            }
            if((s1[i]=='B') && (s2[i]!='G')){
                flag=0;
                break;
            }
        }
        if(flag) cout<< "YES\n";
        else cout<< "NO\n";
    }
    return 0;
}
