#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char number[101];
    int test, i, iNumber;
    scanf("%d", &test);
    for(i=1; i<=test; i++){
        scanf("%s", number);
        //int strln=strlen(number);
        //iNumber= number[strln-1]-48;
        iNumber= atoi(number);
        if(iNumber%18==0){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
