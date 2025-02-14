#include <stdio.h>
#include <stdlib.h>
int main()
{
    long int n,m, i, j, cycleLength=1, maxCycle=0;
    while(scanf("%ld%ld", &n, &m) != EOF){
        if(n>m) swapVal(n, m);
        maxCycle=0;
        for(i=n; i<=m; i++){
            j=i;
            while(j!=1){
                if(j%2 != 0){
                    j=3*j+1;
                    cycleLength++;
                }
                else{
                    j/=2;
                    cycleLength++;
                }
            }
            if(cycleLength>maxCycle)
                maxCycle= cycleLength;
            cycleLength=1;
        }
        swapVal(n, m);
        printf("%ld %ld %ld\n",n, m, maxCycle);
    }
    return 0;
}
