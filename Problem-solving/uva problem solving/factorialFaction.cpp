#include <bits/stdc++.h>
using namespace std;
int ar[10000];
vector<int>v;
void seive(){
    int i,j,n=10000;
    v.push_back(2);
    for(i=3; i<n; i+=2){
        if(ar[i]==0){
            v.push_back(i);
            if(i>n/i) continue;
            for(j=i*i; j<=n; j+=(i+i)) ar[j]=1;
        }
    }
}
int br[1000010];
int main()
{
	seive();
	vector<int>vi;
    long long n,a,i,j,c=0,tot=0,m=1000010;

    for(i=2; i<1000010; i++){
        a=i;
        for(j=0; v[j]<=sqrt(a); j++){
            if(a%v[j]==0){
                while(a%v[j]==0){
                    a/=v[j];
                    c++;
                }
            }
        }
        if(a!=1) c++;
        tot+=c;
        br[i]=tot;
        c=0;
    }
    while(cin>>n){
        cout<<br[n]<<endl;
    }
    return 0;
}
