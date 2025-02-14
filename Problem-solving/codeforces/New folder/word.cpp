#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    string s,conv;
    while(cin>>s){
        conv="";
        int cntU=0, cntL=0;
        for(int i=0; i<s.size(); i++){
            if(isupper(s[i])) cntU++;
            else if(islower(s[i])) cntL++;
        }
        if(cntL>=cntU){
            for(int i=0; i<s.size(); i++){
                char ch=(tolower(s[i]));
                conv+=ch;
            }
        }
        else{
            for(int i=0; i<s.size(); i++){
                char ch=(toupper(s[i]));
                conv+=ch;
            }
        }

        cout<<conv<<endl;
    }
    return 0;
}
