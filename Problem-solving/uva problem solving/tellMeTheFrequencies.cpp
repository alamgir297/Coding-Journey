#include <bits/stdc++.h>

using namespace std;
int main()
{
	int i,j,a;
	string s;
	bool flag=false;
	while(getline(cin, s)){
        if(flag) cout<<endl;
        int ar[130]={0};
        for(i=0; i<s.size(); i++){
            int j=s[i];
            ar[j]++;
            a++;
        }
        for(i=1; i<=a; i++){
            for( j=128; j>=32; j--){
                if(ar[j]==i){
                    printf("%d %d\n",j,i);
                }
            }
        }
        flag= true;
        a=0;
	}
	return 0;
}
