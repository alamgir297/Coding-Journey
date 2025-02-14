#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,x,sum,cnt=0;
	cin>>t;
	while(t--){
	    int n;
        x=3,sum=0;
        while(x--){
            cin>>n;
            sum+=n;
        }
        if(sum>=2) cnt++;
	}
	cout<<cnt<<endl;
    return 0;
}
