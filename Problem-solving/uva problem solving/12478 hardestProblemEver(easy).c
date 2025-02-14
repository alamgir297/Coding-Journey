#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,row=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(sum>n ){
            row--;
            break;
        }
        else{
            sum+=i;
            row++;
        }
//        if(sum==n)
//            break;
    }
    printf("%d\n",row);
    return 0;
}
