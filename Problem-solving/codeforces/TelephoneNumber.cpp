#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,n,Yes;
    string s;
    scanf("%d", &test);
    while(test--){
        Yes=0;
        scanf("%d", &n);
        cin>>s;
        for(int i=0; i<=n-11; i++){
            if(s[i]=='8'){
                Yes=1;
            }
        }
        if(Yes==1) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
