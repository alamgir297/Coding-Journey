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
        string s;
        char c;
        cin>>s;
        cin>>c;
        int len=s.size(),before=0,after=0, ans=0;
        if(len==1 && s[0]==c) cout<<yes;
        else{
            for(int i=0; i<s.size(); i++){
                if(s[i]==c){
                    before=i;
                    after=s.size()-1-i;
                    if(before%2==0 && after%2==0){
                        ans=1;
                        break;
                    }
                    else continue;
                }
            }
            if(ans) cout<<yes;
            else cout<<no;
        }
    }
    return 0;
}
