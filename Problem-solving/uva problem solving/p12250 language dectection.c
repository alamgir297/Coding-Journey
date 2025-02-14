#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char languaeStr[15];
    for(i=1; ; i++){
        scanf("%s",languaeStr);
        if(strcmp(languaeStr,"#")==0 ) break;

        if(strcmp(languaeStr,"HELLO")==0)
            printf("Case %d: ENGLISH\n",i);

        else if(strcmp(languaeStr,"HOLA")==0)
            printf("Case %d: SPANISH\n",i);

        else if(strcmp(languaeStr,"HALLO")==0)
            printf("Case %d: GERMAN\n",i);

        else if(strcmp(languaeStr,"BONJOUR")==0)
            printf("Case %d: FRENCH\n",i);

        else if(strcmp(languaeStr,"CIAO")==0)
            printf("Case %d: ITALIAN\n",i);

        else if(strcmp(languaeStr,"ZDRAVSTVUJTE")==0)
            printf("Case %d: RUSSIAN\n",i);
        else
            printf("Case %d: UNKNOWN\n",i);
    }

    return 0;
}
