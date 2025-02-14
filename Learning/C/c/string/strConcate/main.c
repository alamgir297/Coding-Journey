#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100], str2[100], strTmp[100];
    int i, j, length=0;
    scanf("%s", str);
    scanf("%s", str2);
    for(i=0; str[i]!='\0'; i++){
        strTmp[i]=str[i];
    }

    printf("%s\n", strTmp);
    return 0;
}
