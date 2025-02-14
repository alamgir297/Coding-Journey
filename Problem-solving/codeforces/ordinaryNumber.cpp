#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
        long long int n, product=1;
        int op, op2=0, cnt=0;
        scanf("%lld", &n);
        string s= to_string(n);
        int len=s.length();
        for(int i=0; i<len; i++){
            op=10*op2+1;
            op2=op;
            for(int j=1; j<=9; j++){
                product=j*op;
                if(product>=1 && product<=n) cnt++;
                else if(product>n) break;
            }
        }
        cout<< cnt<< "\n";
	}
    return 0;
}
