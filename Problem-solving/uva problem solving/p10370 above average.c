#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,n;
    int i,j;
    float grade[1000],aboveAvarage=0;
    scanf("%d",&c);

    for(i=0; i<c; i++){
        float avarage=0,ans=0,sum=0;
        scanf("%d",&n);
        for(j=0; j<n; j++){
            scanf("%f",&grade[j]);
            sum+=grade[j];

        }
        avarage=(float)(sum/n);
        for(j=0; j<n; j++){
            if(grade[j]>avarage)
            aboveAvarage++;
        }
        ans=(float)(aboveAvarage*100/n);
        printf("%.3f%\n",ans);
        aboveAvarage=0;
    }
    return 0;
}
