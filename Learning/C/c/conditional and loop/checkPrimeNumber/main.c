#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,number;
    scanf("%d",&number);
    for(i=2; i<=number-1; i++){
        if(number%i==0){
            printf("Not prime\n");
            break;
        }
        else{
            printf("Prime\n");
        }
    }
    return 0;
}
