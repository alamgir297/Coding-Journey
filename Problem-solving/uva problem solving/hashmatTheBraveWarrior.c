#include <stdio.h>

int main()
{
    unsigned int i,j,k;
    while(scanf("%d %d %d",&i, &j, &k) !=EOF){
        if(i==0 && j==0 && k==0){
            break;
        }

        if(i>30000 || j>30000 || k>30000){ //checking invalid input
            break;
        }

        if(i*i+j*j==k*k){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }
}
