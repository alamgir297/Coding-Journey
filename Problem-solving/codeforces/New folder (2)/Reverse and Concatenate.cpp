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
    //fastIO();
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int ans;
        string s,str;
        cin>>s;
        str=s;
        reverse(str.start, str.finish);
        if(k==0) ans=1;
        else if(s==str) ans=1;
        else ans=2;
        cout<<ans<<endl;
    }
    return 0;
}
