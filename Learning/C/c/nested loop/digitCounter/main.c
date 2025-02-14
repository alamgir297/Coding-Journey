#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,n,a,sumOfCurrentNum=0,sumOfAllNum=0;
    scanf("%d%d",&x,&n);

    for(i=x; i<=n; i++){
        a=i;
        while(a!=0){
            sumOfCurrentNum+=a%10;
            a/=10;
        }
        sumOfAllNum+=sumOfCurrentNum;
        sumOfCurrentNum=0;
        a=0;
    }
    printf("%d\n",sumOfAllNum);
    return 0;
}
