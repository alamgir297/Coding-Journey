#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct product{
    int pID;
    char pName[20];
    int pPrice;
    float pWeight;
};
int main()
{
    int ID;
    printf("Input Product ID:");
    scanf("%d",&ID);

    struct product product1;
    product1.pID=1;
    strcpy(product1.pName,"Chocolate");
    product1.pPrice=250;
    product1.pWeight=0.25;

    if(ID==1){
        printf("\nHere is your product details:\n");
        printf("Product ID:%d",product1.pID);
        printf("\nProduct Name:%s",product1.pName);
        printf("\nProduct price:%d ",product1.pPrice);
        printf("\nProduct weight:%.2f",product1.pWeight);

    }


    return 0;
}
