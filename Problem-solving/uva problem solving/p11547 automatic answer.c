#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,calc=0,digit,i=0;
    scanf("%d",&t);
    while(i!=t){
        if(t<1 || t>100) break;
        scanf("%d",&n);
        calc=( ( (n*567)/9+7492)*235)/47-498;
        digit=(calc%100)/10;
        if(digit<0)
            printf("%d\n",(-1)*digit);
        else
            printf("%d\n",digit);
        i++;
    }
    return 0;
}
