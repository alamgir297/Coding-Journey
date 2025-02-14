#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define PB push_back
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--){
        int flag=0;
        string s1,s2;
        cin>>s1>>s2;
        set<char>st1, st2;
        for(int i=0; i<s1.size(); i++){
            if(flag) break;
            for(int j=0;j<s2.size(); j++){
                if(s1[i]==s2[j]){
                    flag=1;
                    break;
                }
            }
        }
        if(flag) cout<< "YES\n";
        else cout<< "NO\n";
    }
    return 0;
}
