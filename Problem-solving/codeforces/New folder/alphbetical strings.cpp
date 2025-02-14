#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int t,cnt,x;
    string s;
    cin>>t;
    while(t--){
        map<char,int>mp;
        string str="";
        int ar[26]={0}, flag=0;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                char ch=s[i];
                mp[ch]=i+1;
            }
        }
        str+='a';
        char c='a';
        for(int i=1; i<s.size(); i++){
            char ch=i+'a';
            if(mp[ch]>mp[c]) str+=ch;
            else str=ch+str;
        }
        if(s==str) cout<< "YES\n";
        else cout<< "NO\n";
    }
    return 0;
}
