#include<stdio.h>
int main()
{
    int n,feet=0,in=0;
    int a,b;
    char c;
    scanf("%d",&n);
   while(n--)
   {
        scanf("%d %c %d",&a,&c,&b);
    feet+=a;
    in+=b;
    if(in>=12)
    {
        while(in>=12)
        {
            in-=12;
            feet++;
        }
    }
    printf("%d Feet, %d Inches\n",feet,in);

   }
return 0;
}
