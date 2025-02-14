#include <stdio.h>
int main()
{
    int x,y;
    int n=0;
    int row=0, col=0;
    int array[n][n];
    int rowIsParit=0,colIsParit=0;
    int cngRow,cngCol;
    while(scanf("%d",&n)!=EOF){
        if(n==0)
            break;
        for(x=0; x<n; x++){
            for(y=0; y<n; y++){
                scanf("%d",&array[x][y]);
                rowIsParit=0;
                colIsParit=0;
            }
        }
        for(x=0; x<n; x++){
            for(y=0; y<n; y++){
                row+=array[x][y];
            }
            if(row%2!=0){
                cngRow=x;
                rowIsParit++;
            }
        }
        for(y=0; y<n; y++){
            for(x=0; x<n; x++){
                col+=array[x][y];
            }
            if(col%2!=0){
                cngCol=y;
                colIsParit++;
            }
        }
        if(rowIsParit==0 && colIsParit==0)
            printf("OK\n");
        else if(rowIsParit==1 && colIsParit==1)
            printf("Change bit (%d,%d)\n",x,y);
        else
            printf("Corrupt\n");
    }//end while
}//end main
