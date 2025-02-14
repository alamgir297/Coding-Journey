#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x,n;
    while(scanf("%lld", &x)!=EOF){
        n=1;
        n=((x*x)*(x+1)*(x+1)/4);
        printf("%lld\n", n);
    }
    return 0;
}
