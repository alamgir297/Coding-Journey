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
    for(int j=30; j<1010; j++){
        int n=j, c=0;
        for(i=0; v[i]<=sqrt(n); i++){
            if(n%v[i]==0){
                c++;
                while(n%v[i]==0){
                    n/=v[i];
    //                    c++;
                }
    //                printf("%d %d\n", v[i],c);
            }
        }
        if(n!=1){
    //            printf("%d 1\n", n);
            c++;
        }
        if(c>=4)
    }
}
int main()
{
    seive();
	int n,a,i,j,c;
	while(cin>>n){
        printf("%d : %d\n", a, c);
	}
    return 0;
}
