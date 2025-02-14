#include <bits/stdc++.h>
using namespace std;
void checkAge(int a){
    if(a<30) throw a;
    else
        cout<< "OK\n";
}
int main()
{
    string name;
    int age;
    vector<string>v;
    cout<< "Enter name :";
    cin>>name;
    cout<< "\nEnter age:"<<endl;
    cin>>age;
    try{
        checkAge(age);
        cout<< "taken first doze?"<<endl;
        int ans;
        cin>>ans;
        if(ans==1) printf("You are eligible for 2nd doze.\n");
        else {
            throw 0.0;
        }
        v.push_back(name);

    }
    catch(int ag){
        cout<< "age 30 or more"<<endl;
    }
    catch(double a){
        cout<< "please register\n";
    }

    return 0;
}
