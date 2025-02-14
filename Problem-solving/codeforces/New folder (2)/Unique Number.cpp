#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define pb push_back
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
    int t,x;
    cin>>t;
    while(t--){
        vi v;
        cin>>x;
        int sum=0, digit=9;
        while(sum<x && digit>0){
            int ans=min(x-sum, digit);
            v.pb(ans);
            sum+=digit;
            digit--;
        }
        sort(v.start, v.last);
        if(sum<x) cout<< "-1\n";
        else{
            for(int i=0; i<v.size(); i++) cout<<v[i];
            cout<< "\n";
        }
    }
    return 0;
}
