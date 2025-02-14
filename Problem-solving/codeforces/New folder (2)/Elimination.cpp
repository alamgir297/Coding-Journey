#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cin>>c>>d;
        if(a+b>c+d) cout<<a+b<<endl;
        else cout<<c+d<<endl;
    }
    return 0;
}
