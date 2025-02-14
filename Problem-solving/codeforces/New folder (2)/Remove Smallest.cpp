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
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n],flag=0;
        for(int i=0; i<n; i++) cin>>ar[i];
        if(n==1) cout<< "YES\n";
        else{
            sort(ar, ar+n);
            for(int i=1; i<n; i++){
                if(abs(ar[i]-ar[i-1])>1){
                    flag=1;
                    break;
                }
            }
            if(!flag) cout<< "YES\n";
            else cout<< "NO\n";
        }
    }
    return 0;
}
