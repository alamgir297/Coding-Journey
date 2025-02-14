#include <bits/stdc++.h>
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
int main()
{
	seive();
    long long n,a,i,j,c;
    while(cin>>n){
        vector<int>vi;
        a=n;
        if(n==0) break;
        if(n<0){
            printf("%lld = -1", a);
            n*=(-1);
        }
        for(i=0; i<=sqrt(n); i++){
            if(n%v[i]==0){
                while(n%v[i]==0){
                    vi.push_back(v[i]);
                    n/=v[i];
                }
            }
        }
        if(n!=1) vi.push_back(n);
        if(a>0){
            printf("%lld = %d", a,vi[0]);
            for(size_t k=1; k<vi.size(); k++){
                printf(" x %d",vi[k]);
            }
        }
        else{
            for(size_t j=0; j<vi.size(); j++) printf(" x %d",vi[j]);
        }

        printf("\n");
    }
    return 0;
}
