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
    string s;
    cin>>s;
    int cnt=1, mx=0,flag=0;
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
        else{
            if(cnt>mx) mx=cnt;
            cnt=1;
        }
    }
    if(cnt>mx) mx=cnt;
    if(s.size()==1) cout<<1<<endl;
    else
        cout<<mx<<endl;
    return 0;
}
