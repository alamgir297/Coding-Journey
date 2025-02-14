#include <iostream>
#include <string>

using namespace std;
class salary{
public:
    float a, b;
    salary(float num1, float num2){
        printf("TOTAL = R$ %.2f\n", num1+(num2*15)/100);
    }
};
int main()
{
    salary emp1, emp2;
    string name1, name2;
    float a, b, c, d;
    cin>>name1;
    cin>>a>>b;
    emp1.salary(a,b);

    cin>>name2;
    cin>>c>>d;
    emp2.salary(c,d);
    return 0;
}
