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
    int t,cntN,cntE;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        cntE=0; cntN=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='E') cntE++;
            else cntN++;
        }
        if(cntN==1) cout<< "NO\n";
        else cout<< "YES\n";
    }
    return 0;
}
