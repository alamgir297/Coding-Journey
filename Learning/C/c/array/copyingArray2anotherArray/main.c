#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, ar1[100], ar2[100];
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d", &ar1[i]);
    }
    for(i=0; i<n; i++){
        ar2[i]=ar1[i];
    }
    for(i=0; i<n; i++){
        printf("%d ",ar1[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        printf("%d ",ar2[i]);
    }
    return 0;
}
