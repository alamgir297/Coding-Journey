#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myValue=99;
    int *pPointer=NULL;

    pPointer=&myValue;

    printf("the address of myValue is %p\n",&myValue);
    printf("the value of myValue is %d\n",myValue);
    printf("the address of pPointer is %p\n",&pPointer);
    printf("the value of pPointer is %p\n",pPointer);
    printf("the value of pPointer pointing to is %d\n",*pPointer);



    return 0;
}
