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

int main()
{
    fastIO();
    int t,flag,len;
    string s,str,str2;
    cin>>t;
    while(t--){
        cin>>s;
        len=s.size();
        str= "", str2+=s[len-2];str2+=s[len-1];
        for(int i=0; i<len-2; i+=2) str+=s[i];
        cout<<str+str2<<endl;
        str2="";
    }
    return 0;
}
