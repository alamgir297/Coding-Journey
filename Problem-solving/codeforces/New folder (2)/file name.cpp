#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag,cnt,ans;
    string s;
    while(cin>>n){
        cin>>s;
        ans=0,cnt=0,flag=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='x') cnt++;
            else{
                flag=1;
                if(cnt>2) ans+=cnt-2;
                cnt=0;
            }
        }
        if(flag && cnt>2)
            ans+=cnt-2;
        if(!flag && cnt>2) ans=cnt-2;
        cout<<ans<<endl;
    }
    return 0;
}
