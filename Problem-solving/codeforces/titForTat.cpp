#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,k;
	cin>>t;
	while(t--){
        cin>>n>>k;
        int len=n-1, ar[n];
        for(int i=0; i<n; i++) cin>>ar[i];
        for(int i=0; i<n-1; i++){
            while(ar[i]>=1 && k!=0){
                ar[i]--;
                ar[len]++;
                k--;
            }
        }
        for(int i=0; i<n; i++) cout<<ar[i]<< " ";
        cout<<endl;
	}
    return 0;
}
