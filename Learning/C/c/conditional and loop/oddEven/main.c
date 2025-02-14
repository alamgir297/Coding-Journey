#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d",&number);
    if(number%2==0){
        printf("Even\n");
    }
    else
        printf("Odd\n");
    return 0;
}
