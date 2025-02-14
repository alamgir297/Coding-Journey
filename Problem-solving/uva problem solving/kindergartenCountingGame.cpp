#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[200];
    int c=0, isWord;
    while(cin.getline(s,200)){
        for(size_t i=0; i<strlen(s); i++){
            if(isalpha(s[i])){
                isWord=1;
            }
            else {
                c+=isWord;
                isWord=0;
            }
        }
        c+=isWord;
        printf("%d\n", c);
        c=0;
    }
    return 0;
}
