#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, k, butts;
    int newC=0, rem=0;

    while(scanf("%d%d", &n, &k) != EOF){
        butts=n;
        for(i=1; i<=n; i++){
            newC=butts/k;
            rem=butts%k;
            butts=newC+rem;
            n+=newC;
            if(butts<k) break;
        }
    printf("%d\n",n);
    }

    return 0;
}
