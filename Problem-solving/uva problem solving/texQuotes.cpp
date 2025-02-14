#include <bits/stdc++.h>
using namespace std;

int main()
{
    char text[10214];
    int flag=0;
    while(scanf("%[^\n]%*c", text) != EOF){
        for(size_t i=0; i<strlen(text); i++){
            if(text[i]=='"'){
                ++flag;
                if(flag%2!=0)
                    printf("``");
                else
                    printf("''");
            }
            else{
                printf("%c", text[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
