#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
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
        if(n%2==0) cout<<n/2<<endl;
        else cout<<(n/2)+1<<endl;
    }
    return 0;
}
