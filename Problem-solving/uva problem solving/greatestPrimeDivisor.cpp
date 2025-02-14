#include <bits/stdc++.h>
using namespace std;
//int ar[10000100];
//vector<long long>v;
//void seive(){
//    int i,j,n=10000100;
//    v.push_back(2);
//    for(i=3; i<n; i+=2){
//        if(ar[i]==0){
//            v.push_back(i);
//            if(i>n/i) continue;
//            for(j=i*i; j<=n; j+=(i+i)) ar[j]=1;
//        }
//    }
//}
int main()
{
//	seive();
    long long n,i,j,c,mx;
    while(cin>>n){
        if(n==0) break;
        if(n<0){
            n*=(-1);
        }
        c=0;
        mx=-1;
        for(i=2; i<=sqrt(n) && n!=1; i++){
            if(n%i==0){
                mx=i;
                c++;
                while(n%i==0){
                    n/=i;
                }
//                if(mx==i) c++;
            }
        }
        if(n!=1 && mx!=-1){
            mx=n;
        }
        else if(c==1) mx=-1;;
        printf("%lld\n",mx);
    }
    return 0;
}
