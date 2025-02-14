#include <stdio.h>
#include <stdlib.h>

int main()
{
    int overs, ballsInAnOver, i, count=1;
    while( (scanf("%d%d", &overs, &ballsInAnOver)) !=EOF ){
        int runs=0, totalRun=0, runInLastOver=0;
        i=overs;
        for(i=overs; i>0; i--){
            if(i==1){
                runInLastOver=(ballsInAnOver*6);
            }
            else
                runs= ((ballsInAnOver*6)-3);
            totalRun+=runInLastOver+runs;
            runs=0;
        }
        printf("Case %d: %d\n", count, totalRun);
        count++;

    }
    return 0;
}
