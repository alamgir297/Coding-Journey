#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int flag,flag1,flag2;
    string s,s1;
    while(cin>>s){
        int len=s.size();
        flag=0,flag1=0, flag2=0; s1="";
        if((s[0]>='a' && s[0]<='z')){
            for(int i=1; i<s.size(); i++){
                if(s[i]>='A' && s[i]<='Z'){
                    flag=1;
                }
                else{
                    flag=0;
                    break;
                }
            }
        }
        if(isupper(s[0])){
            for(int i=0; i<len; i++){
                if(isupper(s[i])) flag2=1;
                else{
                    flag2=0;
                    break;
                }
            }
        }
        if(len==1){
            if(isupper(s[0])){
                char ch=tolower(s[0]);
                printf("%c\n", ch);
                continue;
            }
            if(islower(s[0])){
                char ch=toupper(s[0]);
                printf("%c\n", ch);
                continue;

            }
        }
        if(flag==1){
            char ch=toupper(s[0]);
            s1+=ch;
            for(int i=1; i<s.size(); i++){
                ch=tolower(s[i]);
                s1+=ch;
            }
            cout<<s1<< "\n";
            continue;
        }
        if(flag2){
            for(int i=0; i<len; i++){
                s1+=tolower(s[i]);
            }
            cout<<s1<< "\n";
            flag=1;
        }
        else if(flag==0) cout<<s<< "\n";
    }
    return 0;
}
