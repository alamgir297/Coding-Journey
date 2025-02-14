#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
        bool p1=0, p2=0, p3=0;
        string str;
        cin>>str;
        if(regex_match(str, regex("a*b+"))) p1=1;
        if(regex_match(str, regex("ww*cd+"))) p2=1;
        if(regex_match(str, regex("aa*b+c*"))) p3=1;
        if(p1) cout<< "Matched with a*b+\n";
        else if(p2) cout<< "Matched with ww*cd+\n";
        else if(p3) cout<< "Matched with aa*b+c*\n";
        else cout<< "pattern not recognized\n";

    }
}
