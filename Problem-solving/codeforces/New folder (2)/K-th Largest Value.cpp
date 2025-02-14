#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int n,q,t,x,cnt=0;
    cin>>n>>q;
    int ar[n];
    for(int i=1; i<=n; i++){
        cin>>ar[i];
        if(ar[i]) cnt++;
    }
    while(q--){
        cin>>t>>x;
        if(t==1){
            if(ar[x]) cnt--;
            else cnt++;
            ar[x]=1-ar[x];
        }
        else if(t==2){
            if(cnt>=x) cout<< "1\n";
            else cout<< "0\n";
        }
    }
    return 0;
}
