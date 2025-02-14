#include <bits/stdc++.h>
using namespace std;
class personal_Account{
private:
    int ac_n, balance=0;
public:
    string name;
    int age;
    void addBal(int a){
        balance+=a;
    }
};

int main()
{
    int age,ac,bal;
    personal_Account Alamgir;
    cin>>age>>ac>>bal;
    Alamgir.addBal(bal);
    return 0;
}
