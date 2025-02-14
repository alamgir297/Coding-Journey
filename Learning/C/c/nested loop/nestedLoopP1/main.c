#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,m;
    scanf("%d%d",&n,&m);

    for(i=0; i<n; i++){
        for(j=1; j<=m; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
