#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
string makeStr(string s){
    string str="";
    int len=s.size();
    str+=s[len-1];
    for(int i=0; i<len-1; i++){
        str+=s[i];
    }
//    cout<<str<<endl;
    return str;
}
int main()
{
    fastIO();
    string s,str,tmp;
    int n,cnt,flag,len;
    while(cin>>s){
        set<string>st;
        len=s.size(),cnt=1;
        tmp=s;
        for(int i=0; i<len; i++){
            str=makeStr(tmp);
            tmp=str;
            st.insert(str);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}
