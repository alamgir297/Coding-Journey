#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int n,k;
    while(cin>>n>>k){
        for(int i=0; i<k; i++){
            int d=n%10;
            if(d!=0) n--;
            else n/=10;
        }
        printf("%d\n", n);
    }
    return 0;
}
