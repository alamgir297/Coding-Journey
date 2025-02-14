#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,a;
    scanf("%d", &n);
    int ar[27]={0};
    char s[210];
    while(n--){
        for(i=0; ; i++){
            scanf("%c", &s[i]);
            if(s[i]=='.') break;
            towlower(s[i]);
            a=s[i]-'a';
            ar[a]++;
        }
//            for(j=0; j<27; j++){
//                if(j==a) ar[a]++;
//                else continue;
//            }
        for(i=0; i<26; i++){
            printf("%c = %d\n", i+'a', ar[i]);
        }
    }
    return 0;
}
