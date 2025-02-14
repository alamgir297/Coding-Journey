#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    string s1,s2,str;
    while(cin>>s1>>s2){
        str="";
        for(int i=0; i<s1.size(); i++){
            if(s1[i]==s2[i]) str+='0';
            else str+='1';
        }
        cout<<str<<endl;
    }
    return 0;
}
