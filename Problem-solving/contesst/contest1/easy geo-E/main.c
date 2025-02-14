#include <stdio.h>
#include <stdlib.h>

int main()
{
    double PIE= 3.141592654;
    int i,testCase, D, K;
    double R, r, Area, A1, A2;
    scanf("%d", &testCase);

    for(i=0; i<testCase; i++){
        scanf("%d%d", &D, &K);
        R= (D*K)/(2*PIE*K-2*PIE);
        r=  D/(2*PIE*K-2*PIE);
        A1= PIE*R*R;
        A2= PIE*r*r;
        Area= A1-A2;
        printf("%f\n", Area);
    }
    return 0;
}
