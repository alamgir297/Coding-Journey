//Alamgir khan
//id:53

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book{
    int bID;
    char bName[20];
    char bAuthor[20];
    int bPrice;
    int bPublishYear;
};
int main()
{
    int ID;
    printf("Input the Product ID:");
    scanf("%d",&ID);

    struct book b1;
    b1.bID=124;
    strcpy(b1.bName,"Inferno");
    strcpy(b1.bAuthor,"Dan Brown");
    b1.bPrice=250;
    b1.bPublishYear=2013;

    struct book b2;
    b2.bID=232;
    strcpy(b2.bName,"Sherlock Holmes");
    strcpy(b2.bAuthor,"Aurthur Conan Doyle");
    b2.bPrice=450;
    b2.bPublishYear=1892;

    if(ID==124){
        printf("\nHere is your book details for %d:\n",b1.bID);
        printf("%s was written by %s in %d and price is %d",b1.bName,b1.bAuthor,b1.bPublishYear,b1.bPrice);

    }

    if(ID==232){
        printf("\nHere is your book details for %d:\n",b2.bID);
        printf("%s was written by %s in %d and price is %d",b2.bName,b2.bAuthor,b2.bPublishYear,b2.bPrice);

    }


    return 0;
}
