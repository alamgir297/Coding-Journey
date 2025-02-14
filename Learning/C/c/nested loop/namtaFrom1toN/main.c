#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,current;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        current=i;
        for(j=1; j<=10; j++)
        {
            printf("%d * %d = %d\n", current, j, j*current);
        }
        printf("\n");
    }
    return 0;
}
