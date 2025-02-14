#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int n,p,q,cnt=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p>>q;
        if(q-p>=2) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
