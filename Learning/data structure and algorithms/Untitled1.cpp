#include<stdio.h>

int main()
{
    int n, ar[12][12];
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf()
        }
    }
    char op;
    cin>>n;
    cin>>op;
    int flag=0;
    double sum=0;
    for(int i=n-1; ; i++){
        if(flag) break;
        for(int j=0; j<12; j++){
            sum+=ar[i][j];
            if(j==11) flag=1;
        }
    }
    if(op=='S') cout<<sum<<endl;
    else cout<<sum/12<<endl;
}
