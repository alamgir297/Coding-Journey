#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
        int n, ar[3]={0}, a;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            ar[a]++;
        }
        if(ar[1]%2==0 && ar[2]%2==0 || (ar[1]+ar[2]*2)%2==0 && ar[1]!=0){
            cout<< "Yes\n";
        }
        else
            cout<< "No\n";
	}
    return 0;
}
