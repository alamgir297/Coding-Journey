 #include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[200];
    int len,a=0;
    while(gets(s)){
//        if(a!=0) printf("\n");
        a=1;
        int cnt=0;
        len=strlen(s);
        for(int i=0; i<len; i++){
            if(isdigit(s[i])) cnt+=s[i]-'0';
            else{
                if(s[i]=='!') putchar('\n');
                else{
                    if(s[i]=='b') s[i]=32;
                    for(;cnt--;) putchar(s[i]);
                }
                cnt=0;
            }
        }
    putchar('\n');
    }
    return 0;
}
