#include <bits/stdc++.h>
using namespace std;
int ar[100000];
vector<int>primes;
void seive(){
    int n=100000;
    primes.push_back(2);
    for(int i=3; i<n; i+=2){
       if(ar[i]==0){
            primes.push_back(i);
            if(i>n/i) continue;
            for(int j=i*i; j<=n; j+=i+i) ar[j]=1;
       }
    }
}
int main()
{
    seive();
    int n;
    while(cin>>n){
        for(int i=0; primes[i]<=n; i++) cout<<primes[i]<< " ";
        cout<<endl;
    }
    return 0;
}
