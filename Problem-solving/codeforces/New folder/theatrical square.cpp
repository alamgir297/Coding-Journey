#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    ll m,n,a,height,width;
    while(cin>>m>>n>>a){
        if(m%a==0){
            height=m/a;
        }
        else height=(m/a)+1;
        if(n%a==0) width=n/a;
        else width=(n/a)+1;
        printf("%lld\n", height*width);
    }
    return 0;
}
