#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, l,w,h,cnt=1;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &l, &w, &h);
        if(l<=20 && w<=20 && h<=20)
            printf("Case %d: good\n", cnt++);
        else
            printf("Case %d: bad\n", cnt++);
    }
    return 0;
}
