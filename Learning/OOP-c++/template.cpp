#include <iostream>

using namespace std;
template <typename tmp>
void swapVal(tmp a, tmp b){
    tmp val=a;
        a=b;
        b=val;
        cout<<a<<" "<<b<<endl;
}

int main()
{
    int a, b;
    cin>>a>>b;
    swapVal(a, b);
    char c, d;
    cin>>c>>d;
    swapVal(a, b);
    swapVal(c,d);

    return 0;
}
