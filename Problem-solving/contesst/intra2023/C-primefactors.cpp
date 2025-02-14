#include <bits/stdc++.h>
using namespace std;
int ar[1000010];
vector<int>v;
vector<int>vi;
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
void lucky(){
    seive();
    for(int j=30; j<10000; j++){
        int n=j,x=j, c=0;
        for(int i=0; v[i]<=sqrt(n); i++){
            if(n%v[i]==0){
                c++;
                while(n%v[i]==0){
                    n/=v[i];
                }
            }
        }
        if(n!=1){
            c++;
        }
        if(c>=3) vi.push_back(x);
        c=0;
    }
}
int main()
{
    seive();
    lucky();
	int n,t;
	cin>>t;
	while(t--){
        cin>>n;

        printf("%d\n",vi[n-1]);
	}
    return 0;
}
