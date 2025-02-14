#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll k,n,w,dollars,needed;
    while(cin>>k>>n>>w){
        dollars=0, needed=0;
        for(int i=1; i<=w; i++){
            dollars+=k*i;
        }
        needed=dollars-n;
        if(needed==0 || needed<0) printf("0\n");
        else printf("%d\n", needed);
    }
    return 0;
}
