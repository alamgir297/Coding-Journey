#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    long int a,b;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        if(n>=15) break;
        scanf("%ld %ld",&a, &b);

        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;

}
