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
    int t;
    cin>>t;
    while(t--){
        string s,str,tmp,original,sum;
        vector<string>ans;
        cin>>s;
        original=s;
        for(int i=1; i<s.size(); i++){
            tmp=original;
            int a=(s[i])-'0',b=(s[i-1])-'0';
            cout<<a<< ","<<b<<endl;
            sum=to_string(a+b);
            cout<< "sum "<<sum<<endl;
            tmp.replace();
            cout<<"tmp "<<tmp<<endl;
            ans.pb(tmp);
        }
//        for(int i=0; i<ans.size(); i++) cout<<ans[i]<<endl;
    }
    return 0;
}
