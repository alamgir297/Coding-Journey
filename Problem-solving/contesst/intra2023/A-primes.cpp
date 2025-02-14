#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;
int ar[10000100];
vector<int>v;
void seive(){
    int i,j,k,n=10000100;
    v.push_back(2);
    for(i=3; i<sqrt(n); i+=2){
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
    for(int i=1; i<v.size()-100; i++){
        cout<<v[i+100-1]<<endl;
    }
//    for(int i=0; i<v.size(); i++){
//        int y=99998953;
//        if(v[i]==y){
//            cout<<i<<endl;
//            break;
//        }
//    }
    return 0;
}
