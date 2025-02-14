#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,cnt=1;
    double d,u,v, t1,t2;
    scanf("%d", &test);
    while(test--){
        scanf("%lf%lf%lf", &d, &v, &u);
        if(u<=v || u==0 || v==0) printf("Case %d: can't determine\n",cnt);
        else{
            t1=(d/u);
            t2=d/sqrt(u*u-v*v);
            if(t1>t2) swap(t2, t1);
            printf("Case %d: %.3f\n", cnt, t2-t1);
        }
        cnt++;
    }
    return 0;
}
