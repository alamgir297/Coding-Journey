#include <bits/stdc++.h>
using namespace std;

class String{
public:
    void reverseStr(string s){
        for(int i=s.size()-1; i>=0; i--){
            printf("%c", s[i]);
        }
        printf("\n");
    }
    void reverseStr(int a){
        int rem, r;
        while(a!=0){
            rem=a%10;
            r= r*10+ rem;
            a/=10;
        }
        printf("%d\n",r);
    }
};
int main()
{
    String str;
    string s;
    int a;
    cin>>s;
    str.reverseStr(s);
    cin>>a;
    str.reverseStr(a);
    return 0;
}
