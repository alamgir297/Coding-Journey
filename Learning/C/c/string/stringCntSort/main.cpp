#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n;
    char a, ar[27]={0};
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%c", &a);
        ar[i-'a']++;
    }
    for(i=0; i<27; i++){
        //for(j=1; j<=ar[i]; j++){
                printf("%d ", ar[i]);
        //}
    }
    return 0;
}
