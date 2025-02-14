#include <bits/stdc++.h>
using namespace std;

class Base {
public:
    virtual void function(){
        cout << "In Base Function" << endl;
    }
};
class Derived : public Base {
public:
    void function() {
        cout << "In Derived Function" << endl;
    }
};

int main()
{
    Derived obj;
    Base *a;
    a=&obj;
    a->function();
    obj.function();
}
