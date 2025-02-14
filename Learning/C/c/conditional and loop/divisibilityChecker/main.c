#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a;
    scanf("%d%d",&n,&a);

    if(n%a==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
