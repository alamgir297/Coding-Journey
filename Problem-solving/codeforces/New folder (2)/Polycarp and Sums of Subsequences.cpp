#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

int main()
{
    int t;
    ll x,a,sum;
    vector<ll>vl;
    cin>>t;
    while(t--){
        sum=0;
        for(int i=0; i<7; i++) {
            cin>>x;
            vl.push_back(x);
        }
        for(int i=0; i<3; i++) sum+=vl[i];
        if(sum==vl[6]){
            for(int i=0; i<3; i++) cout<<vl[i]<< " ";
        }
        else{
            for(int i=0; i<2; i++) cout<<vl[i]<< " ";
            cout<<vl[3];
        }
        cout<<endl;
        vl.clear();

    }
    return 0;
}
