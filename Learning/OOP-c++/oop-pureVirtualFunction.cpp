#include <iostream>

using namespace std;
class math{
public:
    virtual void add(int a, int b)=0;

};
class calculate:public math{
public:
    void add(int a, int b){
        cout<< a+b<<endl;
    }
};

int main()
{
    calculate ob;
    int a,b;
    cin>>a>>b;
    ob.add(a, b);
    math *bp= new calculate();
    bp->add(a, b);
    return 0;
}
