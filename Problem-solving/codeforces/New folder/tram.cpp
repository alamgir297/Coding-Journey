#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int n,a,b,sum=0,x=0;
    cin>>n;
    cin>>a>>b;
    sum+=b;
    if(sum>x) x=sum;
    n--;
    while(n--){
        cin>>a>>b;
        sum=sum-a+b;
        if(sum>x) x=sum;
    }
    cout<<x<<endl;
    return 0;
}
