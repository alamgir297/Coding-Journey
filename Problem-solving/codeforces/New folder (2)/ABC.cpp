#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
//    fastIO();
    int t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>n>>s;
        if(s.size()==1) cout<< "YES\n";
        else if(s.size()==2 && s[0]!=s[1]) cout<< "YES\n";
        else cout<< "NO\n";
    }
    return 0;
}
