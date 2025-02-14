#include<stdio.h>

int main()
{
    int t,m,l,ans;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        scanf("%d%d", &m, &l);
        if(m<=l){
            ans=l*4+19;
            printf("Case %d: %d\n",i, ans);
        }
        else{
            ans=(m-l)*4+m*4+19;
            printf("Case %d: %d\n", i,ans);
        }
    }
}
