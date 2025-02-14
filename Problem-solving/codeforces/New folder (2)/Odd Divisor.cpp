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
    ll n,t;
    cin>>t;
    while(t--){
        cin>>n;
        if(n&(n-1)) cout<< "YES\n";
        else cout<< "NO\n";
    }
    return 0;
}
