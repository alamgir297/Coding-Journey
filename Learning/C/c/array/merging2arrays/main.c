#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, m, ar1[100], ar2[100], ar3[100];
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d", &ar1[i]);
    }
    scanf("%d",&m);
    for(i=0; i<n; i++){
        scanf("%d", &ar2[i]);
    }
    for(i=0; i<n+m; i++){
        ar3[i]=ar1[i];
        ar3[n+i]=ar2[i];
    }
    for(i=0; i<n+m; i++){
        printf("%d ",ar3[i]);
    }
    return 0;
}
