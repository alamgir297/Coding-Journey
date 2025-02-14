#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,q;
	string s;
	scanf("%d%d", &n, &q);
	cin>>s;
	while(q--){
        int len=0, ar[27]={0}, l, r;
        scanf("%d%d", &l, &r);
        for(int i=l-1; i<r; i++){
            int a=s[i]+1-'a';
            ar[a]++;
        }
        for(int i=1; i<=26; i++){
            if(ar[i]>0){
                len+=ar[i]*i;
            }
        }
        cout<<len<< "\n";
	}
    return 0;
}
