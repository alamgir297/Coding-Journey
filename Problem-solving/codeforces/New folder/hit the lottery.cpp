#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int n,cnt, cnter=0,remain;
    while(cin>>n){
        int flag=0;
        cnt=0,cnter=0;
        while(n){
            if(n%100==0){
                flag=1;
                cout<<n/100<<endl;
                break;
            }
            else{
                cnt=n/100;
                remain=n-cnt*100;
                cnter+=cnt;
                cnt=remain/20;
                cnter+=cnt;
                remain=remain-cnt*20;
                cnt=remain/10;
                cnter+=cnt;
                remain=remain-cnt*10;
                cnt=remain/5;
                cnter+=cnt;
                remain=remain-cnt*5;
                cnter+=remain;
                n=0;
            }
        }
        if(flag==0) cout<<cnter<<endl;
        cnter=0;
    }
    return 0;
}
