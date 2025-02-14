#include <stdio.h>
#include <stdlib.h>
float add2Num(float, float);
float sub2Num(float, float);
float multiply2Num(float, float);
float devide2Num(float, float);

float num1, num2;
char oprtr;

int main()
{
    float result=0;
    printf("enter n1[+, -, *, /]n2\n");
    scanf("%f%c%f", &num1, &oprtr, &num2);

     if(oprtr=='+')
        result=add2Num(num1, num2);

    else if(oprtr=='-')
        result=sub2Num(num1, num2);

    else if(oprtr=='*')
        result=multiply2Num(num1, num2);

    else if(oprtr=='/')
        result=devide2Num(num1, num2);

    else
        printf("Invalid operator");

    printf("Result:%.2f %c %.2f= %.2f",num1,oprtr,num2,result);
    return 0;
}

float add2Num(float num1, float num2)
{
    return num1+num2;
}

float sub2Num(float num1, float num2)
{
    return num1-num2;
}

float multiply2Num(float num1, float num2)
{
    return num1*num2;
}

float devide2Num(float num1, float num2)
{
    return num1/num2;
}

