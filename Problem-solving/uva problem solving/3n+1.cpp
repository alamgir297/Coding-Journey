#include <iostream>

using namespace std;

int main()
{
    long int n, m, i, j, k, num, cycleLength=1, maxCycle=0;
    while(scanf("%ld%ld", &n, &m) != EOF){
        j=n;
        k=m;
        if(n>m) swap(n, m);
        maxCycle=0;
        for(i=n; i<=m; i++){
            num=i;
            while(num!=1){
                if(num%2 != 0){
                    num=3*num+1;
                    cycleLength++;
                }
                else{
                    num/=2;
                    cycleLength++;
                }
            }

            if(cycleLength>maxCycle)
                maxCycle= cycleLength;
            cycleLength=1;
        }

        printf("%ld %ld %ld\n",j, k, maxCycle);
    }
    return 0;
}
