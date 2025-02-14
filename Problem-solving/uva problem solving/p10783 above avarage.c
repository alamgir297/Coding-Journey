#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,a,b,oddSum;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        oddSum=0;
        scanf("%d",&a);
        scanf("%d",&b);
        for(j=a; j<=b; j++){
            if(j%2!=0){
                oddSum+=j;
            }
        }
        printf("Case %d: %d\n",i, oddSum);
    }
    return 0;
}
