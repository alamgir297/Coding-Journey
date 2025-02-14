#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int n,h,cnt=0,x;
    cin>>n>>h;
    while(n--){
        cin>>x;
        if(x>h) cnt+=2;
        else if(x<=h) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
