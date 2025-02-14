#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numArray[10]={0};
    int x;
    int maxNum=0;
    int temp=0;
    printf("Enter 10 numbers\n");

    //initializing array
    for(x=0; x<10; x++){
        scanf("%d",&numArray[x]);
    }

    //sorting array in ascending order
    for(x=0; x<10; x++){

        if(numArray[x] > numArray[x+1]){
                maxNum=numArray[x];
                maxNum=temp;
        }
        //printing value
        printf("%d ",maxNum);
    }

    return 0;
}
