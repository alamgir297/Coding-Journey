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
int sorted(vi v, int n){
    if(n==1 || n==0) return 1;
    for(int i=1;i<n; i++){
        if(v[i-1]>v[i]) return 0;
    }
    return 1;
}
int main()
{
    fastIO();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vi v,v2;
        int flag=0;
        for(int i=0; i<n; i++ ){
            int x;
            cin>>x;
            v.pb(x);
        }
        if(sorted(v,n)) cout<< "NO\n";
        else cout<< "YES\n";
    }
    return 0;
}
