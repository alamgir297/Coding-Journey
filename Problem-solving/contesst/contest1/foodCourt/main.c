#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCase, i, x;
    scanf("%d", &testCase);

    for(i=1; i<=testCase; i++){
        scanf("%d", &x);
        if(x%10 == 0){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
