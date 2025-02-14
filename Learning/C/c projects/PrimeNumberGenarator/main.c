#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int primeNumber[50]={2};

    for (x=3; x<100; x+=2){
        primeNumber[x]=x;///primeNumber[x];

        if(x/primeNumber[x+1]>=primeNumber[x]);{
            printf("prime %d\n",primeNumber[x]);
        }
        //printf("%d\n",primeNumber[x]);
    }

    return 0;
}
