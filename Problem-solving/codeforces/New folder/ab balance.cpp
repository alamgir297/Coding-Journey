#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;
int main()
{
    int t;
    string s,str;
    cin>>t;
    while(t--){
        cin>>s;
        int cntAB=0, cntBA=0,pos,flag=0;
        str= "";
        vi AB,BA;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]=='a' && s[i+1]=='b'){
                cntAB++;
                pos=i;
                AB.push_back(pos);
            }
            else if(s[i]=='b' && s[i+1]=='a'){
                cntBA++;
                pos=i;
                BA.push_back(pos);
            }
        }
//        cout<<cntAB<< " "<<cntBA<<endl;
        if(cntAB==cntBA) {
            flag=1;
            cout<<s<<endl;
        }
        else{
            if(cntAB>cntBA){
                for(int i=0; i<cntAB-cntBA; i++){
                    int pos=AB[i]+1;
                    for(int j=0; j<s.size(); j++){
                        if(j==pos && s[j]=='b') s[j]='a';
                    }
                }
            }
            else if(cntBA>cntAB){
                for(int i=0; i<cntBA-cntAB; i++){
                    int pos=BA[i];
                    for(int j=0; j<s.size(); j++){
                        if(j==pos && s[j]=='b') s[j]='a';
                    }
                }
            }
        }
        if(flag==0)
            cout<<s<<endl;
    }
    return 0;
}
