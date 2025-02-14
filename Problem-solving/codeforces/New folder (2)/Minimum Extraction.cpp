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
        vi v;
        set<int>mins;
        int ans,flag=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        if(v.size()>1){
            sort(v.start, v.finish);
            ans=v[0];
            for(int i=0; i<n-1; i++){
                ans=max(ans, v[i+1]-v[i]);
            }
            cout<<ans<<endl;
        }
        else cout<<v[0]<<endl;
    }
    return 0;
}
