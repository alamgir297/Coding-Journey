#include <bits/stdc++.h>
#define ll long long
#define vi vector<ll>
using namespace std;
void pVector(vi v, ll n){
    for(ll i=0; i<n; i++) cout<<v[i]<< " ";
    cout<<endl;
}
vi totSum,sum;
vi add(vi a, vi b){
	ll i,j,len;
    ll carry=0;
    len=a.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for(i=0; i<len; i++){
        ll val=a[i]+b[i]+carry;
        carry=val/10;
        sum.emplace_back(val%10);
    }
    return sum;
}
int main()
{
	string a,b;
	ll t,i;
	cin>>t;
	vi num;
	for(int i=0; i<=100; i++){
        sum.push_back(0);
	}
	while(t--){
        cin>>a;
        for(i=0; i<a.size(); i++){
            num.push_back(a[i]-'0');
        }
        add(num, sum);

        num.clear();
	}
	reverse(sum.begin(), sum.end());
	pVector(sum,sum.size());
    return 0;
}
