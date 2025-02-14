#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int test;
    char str[15], str2[10]="donate";

    long dnate, total=0;
    scanf("%d", &test);
    while(test--){
        scanf("%s",str);
        if(strcmp(str, str2)==0){
            scanf("%ld", &dnate);
            total+=dnate;
        }
        else
            printf("%ld\n", total);
    }

    return 0;
}
