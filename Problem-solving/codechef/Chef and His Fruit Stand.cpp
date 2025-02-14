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
    unsigned long long t,x,m;
    cin>>t;
    while(t--){
        cin>>x>>m;
        unsigned long long val=pow(2, m-1);
        cout<<val<<endl;
        unsigned long long ans=val/x;
        cout<<ans<<endl;
    }
    return 0;
}
