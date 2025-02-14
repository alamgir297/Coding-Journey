#include <iostream>

using namespace std;

int factorialOfNumber(int );

int main()
{
    int factorial=0, number;
    cin>>number;
    factorial=factorialOfNumber(number);
    cout<<factorial;
    return 0;
}
int factorialOfNumber(int n)
{
    int factorial=1, i;
    for(i=n; i>0; i--){
        factorial*=i;
    }
    return factorial;
}
