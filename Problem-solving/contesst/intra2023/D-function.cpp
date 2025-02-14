#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;
int ar[1000010];
vector<int>v;
void seive(){
    int i,j,n=1000010;
    v.push_back(2);
    for(i=3; i<n; i+=2){
        if(ar[i]==0){
            v.push_back(i);
            if(i>n/i) continue;
            for(j=i*i; j<=n; j+=(i+i)) ar[j]=1;
        }
    }
}
int isPrime(int n){
    seive();
    for(int i=0; i<v.size(); i++){
        if(v[i]==n) return 1;
    }
    return 0;
}
int main()
{
    seive();
    int x;
    while(cin>>x){
        if(isPrime(x) && x!=2) printf("0\n");
        else printf("%d\n", x);
    }
    return 0;
}
