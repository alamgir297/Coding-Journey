#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define PB push_back
#define start begin()
#define last end()
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
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        sort(s.start,s.last);
        if(s[0]==s[s.size()-1]) cout<<-1<<endl;
        else cout<<s<<endl;
    }
    return 0;
}
