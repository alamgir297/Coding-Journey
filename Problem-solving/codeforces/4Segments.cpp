#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, ar[5];
	cin>>t;
	while(t--){
        int mx=0;
        for(int i=0; i<4; i++) cin>>ar[i];
        sort(ar, ar+4);
        mx=ar[0]*ar[2];
        cout<<mx<<endl;
	}

    return 0;
}
