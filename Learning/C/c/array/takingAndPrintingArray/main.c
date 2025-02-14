#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,ar[100];
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    for(i=0; i<n; i++){
        printf("%d\n",ar[i]);
    }
    return 0;
}
