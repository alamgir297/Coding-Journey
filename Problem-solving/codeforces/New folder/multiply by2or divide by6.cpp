#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    ll t,n;
    cin>>t;
    while(t--){
        int cnt=0;
        cin>>n;
        while(n>=1){
            if(n==1) break;
            if(n%6==0){
                n/=6;
                cnt++;
            }
            else{
                n*=2;
                cnt++;
            }
        }
        if(n==1) printf("%d\n",cnt);
        else printf("-1\n");
    }
    return 0;
}
