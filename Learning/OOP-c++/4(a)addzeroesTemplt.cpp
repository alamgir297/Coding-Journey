#include <bits/stdc++.h>
using namespace std;
template <typename T>
void addZeros(T s){
    T len=0,n;
    len=s.size();
    n=5-len;
    T tmp;
    if(n%10==0){
        while(n--){
            tmp= '0'+s;
        }
    }
    cout<<tmp;
}

int main()
{
    string s;
    cin>>s;
    addZeros(s);

    return 0;
}
