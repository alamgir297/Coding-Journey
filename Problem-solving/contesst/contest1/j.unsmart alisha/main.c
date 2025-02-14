#include<stdio.h>
#include<string.h>
int main()
{
    char b[1000];
    char a[8][4]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int test,len,i,i2,i3,Case=0;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%s",b);
        len=strlen(b);
        printf("Case %d:\n",++Case);
        for(i3=0;i3<len;i3++)
        {
             for(i=0;i<=7;i++)
             {
                 for(i2=0;i2<4;i2++)
                 {

                      if(b[i3]==a[i][i2])
                      {
                          printf("%d-%d times\n",i+2,i2+1);
                          break;
                      }
                 }
             }
       }
    }
    return 0;
}
