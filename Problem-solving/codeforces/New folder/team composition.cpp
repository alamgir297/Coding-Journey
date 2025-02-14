#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    ll t,a,b,cnt,total;
    scanf("%d", &t);
    while(t--){
        cnt=0;
        cin>>a>>b;
        total=a+b;
        if(total<4) printf("0\n");
        else{
            if(a==b) printf("%lld\n", total/4);

        }
        if(a>b) swap(a,b);
        while(a>=1 && b>=3){
            cnt++;
            a--;
            b-=3;
            if(a>b) swap(a,b);
        }
    printf("%lld\n", cnt);
    }
    return 0;
}
