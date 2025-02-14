#include <bits/stdc++.h>

using namespace std;
int divisibility(string s, int num){
    int len=s.size(), mod, cur=0;
    for(int i=0; i<len; i++){
        cur=cur*10+(s[i]-'0');
        cur=cur%num;
    }
    if(mod==0) return 1;
    else return 0;
}
int main()
{
    string num; int a=0;
    while(cin>>num){
        int flag=0,flag1=0,flag2=0;
        if(a!=0) printf("\n");
        a=1;
        if(divisibility(num,4) && divisibility(num,100)==0 || divisibility(num,400)){
            flag=1;
            printf("This is leap year.\n");
        }
        if(divisibility(num, 15)){
            flag2=1;
            printf("This is huluculu festival year.\n");
        }
        if(flag==1 && divisibility(num, 55)){
            flag=1;
            printf("This is bulukulu festival year.\n");
        }
        if(flag==0 && flag2==0){
            printf("This is an ordinary year.\n");
        }
    }

    return 0;
}
