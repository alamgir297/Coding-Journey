#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    ll n;
    while(cin>>n){
        if(n%2==0) cout<<n/2<<endl;
        else cout<<-1*(n+1)/2<<endl;
    }
    return 0;
}
