#include <stdio.h>
#include <stdlib.h>

long int factorialOfNumber(long int);
int main()
{
    long int number,factorial=0;
    scanf("%ld",&number);
    factorial=factorialOfNumber(number);
    printf("%ld",factorial);
    return 0;
}
long int factorialOfNumber(long int n)
{
    long int factorial=1;
    for(int i=n; i>0; i--){
        factorial*=i;
    }
    return factorial;
}
