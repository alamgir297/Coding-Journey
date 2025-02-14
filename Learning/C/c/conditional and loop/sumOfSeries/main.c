#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sumOfOdd=0,sumOfEven=0,total=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        if(i%2==0){
            sumOfEven-=i;
        }
        else{
            sumOfOdd+=i;
        }
    }
    total=sumOfEven+sumOfOdd;
    printf("%d\n",total);

    return 0;
}
