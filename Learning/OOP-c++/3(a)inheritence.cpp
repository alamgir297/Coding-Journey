#include <bits/stdc++.h>
using namespace std;
class grandfather{
public:
    grandfather(){
        cout<< "in g class\n";
    }
    ~grandfather(){}
};
class father: grandfather{
public:
    father(){
        cout<< "in f class\n";
    }
    ~father(){}
};
class son: public father{
public:
    son(){
        cout<< "in s class\n";
    }
    ~son(){}
};
class grandmother{

};
class uncle: public grandfather, public grandmother{

};

int main()
{
    grandfather ob1;
    father ob2;
    son ob3;
    return 0;
}
