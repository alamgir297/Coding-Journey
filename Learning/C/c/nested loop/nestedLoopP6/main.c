#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i-1; j++){
            printf(" ");
        }
        for(j=i; j<=n; j++){
            printf("*");
        }
        for(j=i; j<=n-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
