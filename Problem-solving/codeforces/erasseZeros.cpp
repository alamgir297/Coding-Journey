#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, a,b,c,n;
    string s;
    scanf("%d", &n);
    while(n--){
        a=0,b=0,c=0;
        cin>> s;
        for(i=0; i<s.size(); i++){
            if(s[i]=='1'){
                a=i;
                break;
            }
        }
        for(i=s.size(); i>=0; i--){
            if(s[i]=='1'){
                b=i;
                break;
            }
        }
        for(i=a; i<=b-1; i++){
            if(s[i]=='0')
                c++;
        }
        printf("%d\n", c);
    }
    return 0;
}
