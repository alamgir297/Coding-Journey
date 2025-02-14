
#include <stdio.h>

int main()
{
    float iLength=0;
    float iWidth=0;
    float iParameter=0;
    float iArea=0;

    printf("Enter the value of Length:");
    scanf("%f",&iLength);
    printf("\nEnter the value of width:");
    scanf("%f",&iWidth);

    iParameter=(iLength+iWidth)*2;
    iArea=iLength*iWidth;

    printf("the value of parameter is:%f\n",iParameter);
    printf("the value of area is:%f\n",iArea);

}
