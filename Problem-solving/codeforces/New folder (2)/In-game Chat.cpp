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
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        string s; int cnt=0;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]==')') cnt++;
            else cnt=0;
        }
        if(cnt>(n-cnt)) cout<< "YES\n";
        else cout<< "NO\n";
    }
    return 0;
}
