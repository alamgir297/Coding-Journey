#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    scanf("%d%d%d",&i,&j,&k);
    if(i==j && j==k && k==i){
        printf("This is an equilateral triangle.\n");
    }
    else if(i!=j && j!=k && k!=i){
        printf("This is a scalene triangle.\n");
    }
    else{
        printf("This is an isosceles triangle.\n");
    }
    return 0;
}
