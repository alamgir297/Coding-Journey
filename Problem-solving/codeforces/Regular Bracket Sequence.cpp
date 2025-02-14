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
        string s;
        cin>>s;
        int flag=1,len=s.size(),ok=0;
        stack<char>stc;
        if(len%2==0){
            if(s[0]!=')' && s[len-1]!='(') cout<<yes;
            else cout<<no;
        }
        else cout<<no;
    }
    return 0;
}
