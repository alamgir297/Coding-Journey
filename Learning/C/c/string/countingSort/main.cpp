#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j, a, ar[10000]={0}, n;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a);
        ar[a]++;
    }
    for(i=0; i<n+1; i++){
        for(j=1; j<=ar[i]; j++){
                printf("%d ", i);
        }
    }
    return 0;
}
