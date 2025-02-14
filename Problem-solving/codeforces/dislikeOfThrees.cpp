#include <bits/stdc++.h>
using namespace std;
vector<int>v;
void not3(){
    int i,x=1700;
    v.push_back(1);
    for(i=1; i<=x; i++){
        if(i%3!=0 && i%10!=3){
            v.push_back(i);
        }
    }
}
int main()
{
	int t,n;
	not3();
	cin>>t;
	while(t--){
        cin>>n;
        cout<<v[n]<<endl;
	}
    return 0;
}
