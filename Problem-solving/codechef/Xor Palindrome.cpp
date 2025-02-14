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
    fastIO();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s,ans,yes="YES",no="NO";
        cin>>s;
        int one=0, zero=0,len=s.size();
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1') one++;
            else zero++;
        }
        if(len%2==0){
            if(one==zero) ans=yes;
            else if(one==n || zero==n) ans=yes;
            else if(one%2==0 && zero%2==0) ans=yes;
            else ans=no;
        }
        else ans=yes;
        cout<<ans<<endl;
    }
    return 0;
}
