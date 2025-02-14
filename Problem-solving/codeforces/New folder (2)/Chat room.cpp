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
    string s,str;
    while(cin>>s){
        str= ""; int cnt=0,flag=0;
        for(int i=0; i<s.size(); i++){
            if(flag) break;
            if(s[i]!=s[i+1] && s[i]=='h'){
                str+=s[i];
                for(int j=i+1; j<s.size(); j++){
                    if(flag) break;
                    if(s[j]!=s[j+1] && s[j]=='e'){
                        str+=s[j]; flag=1;
                        for(int k=j+1; k<s.size(); k++){
                            if(s[k]=='l'&& cnt<2){
                                str+=s[k];
                                cnt++;
                                if(cnt==2){
                                    flag=1;
                                    break;
                                }
                            }
                        }
                        for(int l=j+1; l<s.size(); l++){
                            if(s[l]!=s[l+1] && s[l]=='o'){
                                str+=s[l];
                                break;
                            }
                        }
                    }
                }
            }
        }
        if(str=="hello") cout<< "YES\n";
        else cout<< "NO\n";
    }
    return 0;
}
