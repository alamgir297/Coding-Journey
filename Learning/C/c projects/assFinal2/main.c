#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char string[20];
    char *ar[5];
    char *reversedArray[5];
    FILE *fp1;
    fp1=fopen("city.txt","w");
    if(fp1==NULL)
        printf("File not opened\n");
    for (i=0; i<5; i++){
        scanf("%s",&ar[i]);
    }
    for(i=0; i<5; i++){
        fprintf(fp1, "%s\n",&ar[i]);
    }
    fclose(fp1);
    fp1=fopen("city.txt", "r");
    for(i=0; i<5; i++){
        fgets(string,20,fp1);
        ar[i]=strdup(string);
    }
    fclose(fp1);

    //FILE *fp2;
    fp1=fopen("reversed.txt", "w");
    if(fp1==NULL){
        printf("File not opened\n");
    }
    fprintf(fp1,"Reversed Form:");

    for(i=0; i<5; i++){
        fprintf(fp1, "%s",strrev (ar[i]));
    }
    fclose(fp1);

    return 0;
}
