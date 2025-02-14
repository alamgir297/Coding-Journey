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
    fastIO();
    string s;
    while(cin>>s){
        bool ab=false, ba=false,flag=false,ans=false;
        int len=s.size();
        if(len>3){
            for(int i=0; i<s.size();i++){
                if(ba) break;
                if(flag) break;
                if(s[i]=='A' && s[i+1]=='B' &&i+1<len){
                    ab=true;
                    for(int j=i+2; j<s.size(); j++){
                        if(s[j]=='B' && s[j+1]=='A' && j+1<len){
                            ba=true;
                            break;
                        }
                        if(j==len-1) flag=true;
                    }
                }
            }
            if(ba && ab){
                ans=true;
            }
            else{
                ab=false, ba=false,flag=false,ans=false;
                for(int i=0; i<s.size();i++){
                    if(ab) break;
                    if(flag) break;
                    if(s[i]=='B' && s[i+1]=='A' &&i+1<len){
                        ba=true;
                        for(int j=i+2; j<s.size(); j++){
                            if(s[j]=='A' && s[j+1]=='B' && j+1<len){
                                ab=true;
                                break;
                            }
                            if(j==len-1) flag=true;
                        }
                    }
                }
                if(ba && ab){
                    ans=true;
                }
            }
            if(ans) cout<< "YES\n";
            else cout<< "NO\n";
        }
        else cout<< "NO\n";
    }
    return 0;
}
