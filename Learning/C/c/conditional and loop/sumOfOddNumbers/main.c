#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sumOfOdd=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(i%2!=0){
            sumOfOdd+=i;
        }
    }
    printf("%d\n",sumOfOdd);
    return 0;
}
