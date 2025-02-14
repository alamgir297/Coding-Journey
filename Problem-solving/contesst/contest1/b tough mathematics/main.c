#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testcase, n, i;
    scanf("%d",&testcase);
    for(i=1; i<=testcase; i++){
        scanf("%d", &n);
        if(n==1)
            printf("Welcome to the BUBT IUPC\n");
        else
            printf("Thank You\n");
    }
    return 0;
}
