#include <stdio.h>
#include <stdlib.h>

void evenOddChecker(int);

int main()
{
    int number;
    scanf("%d",&number);
    evenOddChecker(number);

    return 0;
}

void evenOddChecker(int a)
{
    if(a%2==0)
        printf("Even\n");
    else
        printf("Odd\n");
}
