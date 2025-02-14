/*
*
*
*
this program converts minutes to years and days
*
*
*
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutesEntered=0;
    double minutesInYear=0;
    double years=0;
    double days=0;
    double minutesInDay=0;
    printf("enter amount of minutes:");
    scanf("%d",&minutesEntered);

    minutesInYear=24*60*365;
    minutesInDay=24*60;

    years=minutesEntered/minutesInYear;
    days=minutesEntered/minutesInDay;

    printf("\n minutes in a year :%f",minutesInYear);
    printf("\n minutes in a day :%f",minutesInDay);

    printf("\n%d minutes= %f years \n%d minutes= %f days",minutesEntered, years, minutesEntered, days);



    return 0;
}
