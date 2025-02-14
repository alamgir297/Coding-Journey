#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char str[100], revStr[100];
    int i, length=0, cnt;
    gets(str);
    for(i=0; str[i]!='\0'; i++) length++;
    printf("%d\n", length);
    cnt=length-1;
    for(i=0; i<length; i++){
        revStr[i]=str[cnt];
        cnt--;
    }
    printf("%s\n", revStr);
    return 0;
}
