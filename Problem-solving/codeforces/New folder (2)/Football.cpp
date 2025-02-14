#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
//    fastIO();
    string s;
    while(cin>>s){
        int cnt0=1,cnt1=1, len=s.size(),flag=0;
        if(len<7) flag=0;
        else{
            for(int i=0; i<len; i++){
                if(s[i]==s[i+1]&&s[i]){
                    cnt0++;
                    if(cnt0==7){
                        cout<< "YES\n";
                        flag=1;
                        break;
                    }
                }
                else cnt0=1;
            }
        }
        if(flag==0) cout<< "NO\n";
    }
    return 0;
}
