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
    fastIO();
    int a,b,c,ans;
    while(cin>>a>>b>>c){
        vi v;
        v.pb(a+b+c);
        v.pb(a+(b*c));
        v.pb((a+b)*c);
        v.pb(a*(b+c));
        v.pb((a*b)+c);
        v.pb(a*b*c);
        sort(v.begin(),v.end(),greater<int>());
        cout<<v[0]<<endl;
    }
    return 0;
}
