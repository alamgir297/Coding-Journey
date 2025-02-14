#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t,n;
    scanf("%ld", &t);
    while(t--){
        string s,s1,s2,rev1,rev2;
        cin>> s;
        s1='a'+s;
        rev1=s1;
        reverse(rev1.begin(), rev1.end());
        s2=s+'a';
        rev2=s2;
        reverse(rev2.begin(), rev2.end());
        if(s1!=rev1){
            printf("YES\n");
            cout<<s1<<endl;
        }
        else if(s2!=rev2){
            printf("YES\n");
            cout<<s2<<endl;
        }
        else
            printf("NO\n");
    }
    return 0;
}
