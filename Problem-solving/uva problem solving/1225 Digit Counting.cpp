#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,a,x,k;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        int ar[11]={0};
        scanf("%d", &a);
        for(j=1; j<=a; j++){
            k=j;
            while(k!=0){
                x=k%10;
                ar[x]++;
                k/=10;
            }
        }
        for(j=0; j<9; j++) printf("%d ", ar[j]);
        printf("%d\n", ar[9]);
    }
    return 0;
}
