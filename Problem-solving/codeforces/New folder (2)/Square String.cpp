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
    int t;
    string s,str1,str2;
    cin>>t;
    while(t--){
        str1= "",str2= "";
        cin>>s;
        int len=s.size();
        if(len%2==0 && len!=0){
            for(int i=0; i<len/2; i++) str1+=s[i];
            for(int i=len/2; i<len; i++) str2+=s[i];
            if(str1==str2) cout<< "YES\n";
            else cout<< "NO\n";
        }
        else cout<< "NO\n";
    }
    return 0;
}
