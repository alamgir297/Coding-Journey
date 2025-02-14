#include <iostream>
#include<cstring>

using namespace std;

class overload{
    public:
    void add(int a, int b){
        cout<< a+b<<endl;
    }

    void add(string a, string b){
        cout<< strcat(a,b)<<endl;
    }


};
int main()
{
    overload add2;
    int input1, input2;
    string str1, str2;
    cin>> input1>> input2;
    cin>> str1>> str2;

    add2.add(input1, input2);
    add2.add(str1, str2);

    return 0;
}
