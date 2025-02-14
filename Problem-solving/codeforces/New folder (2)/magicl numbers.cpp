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
    string s;
    while(cin>>s){
        string ans;
        int cnt=0,flag=0;
        if(s[0]=='1'){
            flag=1;
            for(int i=1; i<s.size(); i++){
                if(s[i]=='1' || s[i]=='4'){
                    if(s[i]=='4') cnt++;
                    else{
                        if(cnt>2){
                            flag=0;
                            break;
                        }
                        cnt=0;
                    }
                }
                else{
                    flag=0;
                    break;
                }
            }
            if(cnt>2) flag=0;
        }
        else ans="NO";
        if(flag) ans="YES";
        else ans="NO";
        cout<<ans<<endl;
    }
    return 0;
}
