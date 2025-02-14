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
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>k;
        cout<<100/__gcd(100,k)<<endl;
    }
    return 0;
}
