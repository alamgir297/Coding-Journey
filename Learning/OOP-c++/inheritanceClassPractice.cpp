#include <iostream>

using namespace std;

class factorial{
public:
    void factorialOfaNumber(long n){
        long factorialOfNum=1;
        for(int i=1; i<=n; i++){
            factorialOfNum*=i;
        }
        cout<< factorialOfNum<<endl;
    }
};

class lastDigit : public factorial{
public:
    void lastDigitOfNum(int n){
        int lastDig;
        lastDig= n%10;
        cout<<lastDig<<endl;
    }
};
int main()
{
    lastDigit num;
    long number1, number2;
    cin>> number1>> number2;
    num.factorialOfaNumber(number1);
    num.lastDigitOfNum(number2);

    return 0;
}
