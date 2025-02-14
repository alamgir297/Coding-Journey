#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,test, numOfFarmer, space, numOfAnimal, eFriend;
    int sum=0.0;
    scanf("%d", &test);
    while(test!=0){
        scanf("%d", &numOfFarmer);
        for(i=1; i<=numOfFarmer; i++){
            scanf("%d%d%d", &space, &numOfAnimal, &eFriend);
            sum+= space*eFriend;
        }
        printf("%d\n",sum);
        sum=0;
        test--;
    }
    return 0;
}
