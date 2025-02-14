#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,a,b,c,i,survived;
    scanf("%d",&t);
    for(i=1; i<=t; i++){
        scanf("%d %d %d",&a, &b, &c);

        if( (b>a && a>c) || (b<a && a<c))
            survived=a;
        else if((a<b && b<c) || (a>b && b>c))
            survived=b;
        else if((a>c && c>b) || (a<c && c<b))
            survived=c;
        printf("Case %d: %d\n",i,survived);
    }
    return 0;
}
