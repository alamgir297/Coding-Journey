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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt1=0, cnt0=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1') cnt1++;
            else cnt0++;
        }
        int ans;
        if(cnt0!=cnt1) ans=min(cnt0,cnt1);
        else ans=cnt0-1;
        cout<< ans<<endl;
    }
    return 0;
}
