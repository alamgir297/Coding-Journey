#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
//    fastIO();
    int n,a,b,c,flag;
    while(cin>>n){
        flag=0,c=0;
        for(int i=sqrt(n); ;){
            if(flag){
                i++;
                flag=0;
            }
            if(c){
                a=i;
                break;
            }
            for(int j=1; ; j++){
                if(i*j>n){
                    flag=1;
                    break;
                }
                else if(i*j==n){
                    b=j;
                    c=1;
                    break;
                }
            }
        }
        if(a>b) swap(a,b);
        cout<<a<< " "<<b<<endl;
    }
    return 0;
}
