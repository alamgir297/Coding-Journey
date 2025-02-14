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
int cntOdds(int l, int r){
    int odds,n;
    n=r-l+1;
    if(n%2==0) odds=n/2;
    else{
        if(r%2!=0 || l%2!=0) odds=(n/2)+1;
        else odds=n/2;
    }
    return odds;
}
int main()
{
    fastIO();
    int t,l,r,k;
    cin>>t;
    while(t--){
        string ans;
        cin>>l>>r>>k;
        int odds=cntOdds(l,r);
        if(l==r && l==1) ans="NO";
        else if(l==r && l>1) ans="YES";
        else if(odds<=k) ans="YES";
        else ans="NO";
        cout<<ans<<endl;
    }
    return 0;
}
