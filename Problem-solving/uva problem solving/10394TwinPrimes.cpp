#include <bits/stdc++.h>
using namespace std;
int ar[20000100];
vector<int>v;
vector<pair<int,int>>vi;
void seive(){
    int i,j,n=20000100;
    v.push_back(2);
    for(i=3; i<n; i+=2){
        if(ar[i]==0){
            v.push_back(i);
            if(i>n/i) continue;
            for(j=i*i; j<=n; j+=(i+i)) ar[j]=1;
        }
    }
    for(i=0; i<v.size(); i++){
        int p=v[i]+2;
        if(p==v[i+1]){
            vi.push_back({v[i], v[i+1]});
        }
    }
}
int main()
{
	seive();
	int i,j,a,n,flag;
//	int len=vi.size()-1;
//	cout<<len<<endl;
//        cout<< "("<<vi[len-1].first<< ", "<<vi[len-1].second<< ")\n";
	while(cin>>n){
        cout<< "("<<vi[n-1].first<< ", "<<vi[n-1].second<< ")\n";
	}
    return 0;
}
