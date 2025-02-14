#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define pb push_back
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
//    fastIO();
    int n,m;
    while(cin>>n>>m){
        int current=0, cnt=0,flag=0;
        vi ar(n), ans;
        for(int i=0; i<n; i++) cin>>ar[i];
        for(int i=0; i<n; i++){
            int names=ar[i];
            cnt=(current+names)/m;
            ans.pb(cnt);
//            cout<<"current +names "<<current+names<<endl;
            current=(current+names)%m;
//            cout<<"current "<<current<<endl;
        }
        for(int i=0; i<n; i++) cout<<ans[i]<<space;
        newline;
    }
    return 0;
}
