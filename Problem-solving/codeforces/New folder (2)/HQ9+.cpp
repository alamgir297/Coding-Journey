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
    string s;
    while(cin>>s){
        int flag=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='H' || s[i]=='Q' || s[i]=='9') flag=1;
        }
        if(flag) cout<< "YES\n";
        else cout<< "NO\n";
    }
    return 0;
}
