#include <iostream>

using namespace std;

class myClass {
    public:
    int salary=5,year=1999;

};

int main()
{
    myClass class1,class2;
    int value1=class1.salary;
    int value2=class2.year;
    cout <<value1<<endl;
    cout << value2<<endl;
    return 0;
}
