#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
//    fastIO();
    int n;
    while(cin>>n){
        string s;
        vi ans;
        int cnt=0, flag=0;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='B'){
                cnt++;
                flag=1;
            }
            else{
                if(cnt>0) ans.pb(cnt);
                cnt=0;
            }
        }
        if(cnt>0) ans.pb(cnt);
        if(flag){
            cout<<ans.size()<<endl;
            for(int i=0; i<ans.size(); i++){
                cout<<ans[i]<<space;
            }
            newline;
        }
        else cout<<0<<endl;
    }
    return 0;
}
