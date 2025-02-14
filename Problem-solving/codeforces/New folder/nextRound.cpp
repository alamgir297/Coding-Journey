#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,a,j,n,ar[100],cnt=0;
	cin>>n>>a;
	for(i=0; i<n; i++){
        cin>>ar[i];
	}
	j=ar[a-1];
	for(i=0; i<n; i++){
        if(ar[i]>=j && ar[i]>0) cnt++;
	}
	cout<< cnt<<endl;
    return 0;
}
