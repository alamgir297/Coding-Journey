#include <bits/stdc++.h>
using namespace std;
int ar[5000010];
vector<int>v;
void seive(){
    int i,j,k,n=100010;
    v.push_back(2);
    for(i=3; i<n; i+=2){
       if(ar[i]==0){
            v.push_back(i);
            if(i>n/i) continue;
            for(j=i*i; j<=n; j+=i+i) ar[j]=1;
       }
    }
}
int main()
{
    int i,j,x, flag;
    seive();
    while(cin>>x){
        i=0, j=v.size()-1,flag=0;
        while(i<j){
            if(v[i]+v[j]==x){
                printf("Yes\n");
                flag=1;
                break;
            }
            if(v[i]+v[j]<x) i++;
            else j--;
        }
        if(flag==0) printf("No\n");
    }
    return 0;
}
