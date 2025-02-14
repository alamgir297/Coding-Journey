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
    ll t,n,x;
    cin>>t;
    while(t--){
        ll maximum=0, minimum=12345678901;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>x;
            if(x>maximum) maximum=x;
            if(x<minimum) minimum=x;
        }
        cout<<maximum-minimum<<endl;
    }
    return 0;
}
