#include <bits/stdc++.h>
using namespace std;
int ar[10000100];
vector<int>v;
void seive(){
    int n=10000100,i,j;
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
    seive();
    int x,i,j,flag;
    while(cin>>x){
        if(x==0) break;
        i=0, j=v.size()-1,flag=0;
        while(i<=j){
            if(v[i]+v[j]==x){
                printf("%d:\n%d+%d\n",x,v[i],v[j]);
                flag=1;
                break;
            }
            else if(v[i]+v[i]==x){
                printf("%d:\n%d+%d\n",x,v[i],v[i]);
                flag=1;
                break;
            }
            if(v[i]+v[j]<x) i++;
            else j--;
        }
        if(flag==0){
            cout<<x<< ":\n";
            cout<< "NO WAY!\n";
        }
    }
    return 0;
}
