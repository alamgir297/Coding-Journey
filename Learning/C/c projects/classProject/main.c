#include <stdio.h>
int main()
{
    int x,y,n;
    int row=0, col=0;
    int array[n][n];
    while(scanf("%d",&n)==1){
        if(n==0)
            break;
        for(x=0; x<n; x++){
            for(y=0; y<n; y++){
                scanf("%d",array[x][y]);
            }
        }
        for(x=0; x<n; x++){
            row=0;
            for(y=0; y<n; y++){
                row+=array[x][y];
            }

        }
       printf("%d",row);
    }//end while
}//end main
