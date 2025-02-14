#include <iostream>

using namespace std;

class calculator{
    public:
        double add(double a, double b);
        double substract(double a, double b);
        double multiply(double a, double b);
        double divide(double a, double b);
};
double calculator::add(double a, double b)
{
    return a+b;
}
double calculator::substract(double a, double b)
{
    return a-b;
}
double calculator::multiply(double a, double b)
{
    return a*b;
}
double calculator::divide(double a, double b)
{
    return a/b;
}


int main()
{
    double num1,num2,result;
    char operate;
    calculator obj;
    cout<< "Enter a(+,-,*,/)b"<<endl;
    cin>>num1;
    cin>> operate;
    cin>>num2;

    if(operate=='+'){
        result=obj.add(num1, num2);
        cout<< result;
    }
    else if(operate=='-'){
        result=obj.substract(num1, num2);
        cout<< result;
    }

    else if(operate=='*'){
        result=obj.multiply(num1, num2);
        cout<< result;
    }

    else{
        result=obj.divide(num1, num2);
        cout<< result;
    }

    return 0;
}
