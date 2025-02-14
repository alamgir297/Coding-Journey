/*weekly pay calculator*/

#include <stdio.h>
#include <stdlib.h>

//constants
#define PAYRATE 12
#define OVERTIME 18
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25

int main()
{
    float hours=0;
    float basicPay=0;
    float overtimePay=0.0;
    float grossPay=0.0;
    float netPay=0.0;
    float tax=0.0;

    //taking input from the user
    printf("\t*****Pay calculator pro*****\n");
    printf("Number of hours worked in a week:");
    scanf("%f",&hours);

    //calculating gross pay
    if (hours<=40){
        grossPay=hours*PAYRATE;
        basicPay=hours*PAYRATE;
    }

    else{
        basicPay=40*PAYRATE;
        grossPay=40*PAYRATE;
        overtimePay=(hours-40)*OVERTIME;
        grossPay+=overtimePay;
    }
    //

    netPay=grossPay-tax;

    printf("\nYour basic pay is %.2f $\n",basicPay);
    printf("\nYour overtime pay is %.2f $\n",overtimePay);
    printf("\nYour gross pay is %.2f $\n",grossPay);
    printf("your tax is %.2f \n",tax);
    printf("your net Pay is %.2f \n",netPay);


    return 0;
}
