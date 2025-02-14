#include <bits/stdc++.h>
using namespace std;
#define ll long long
string tot;
string add(string a, string b){
    string sum= "";
    if(a.size()> b.size()) swap(a,b);
    ll len1=a.size(), len2=b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    ll carry=0;
    for(ll i=0; i<len1; i++){
        ll val=((a[i]-'0')+(b[i]-'0')+carry);
        carry=val/10;
        sum.push_back(val%10+'0');
    }
    for(ll i=len1; i<len2; i++){
        ll val=(b[i]-'0')+carry;
        carry=val/10;
        sum.push_back(val%10+'0');
    }
    if(carry) sum.push_back(carry+'0');
    reverse(sum.begin(), sum.end());
    tot=sum;
    return sum;
}
void pString(string a){
    for(ll i=0; i<a.size(); i++)
        cout<<a[i];
    cout<<endl;
}
int main()
{
    ll i,j,t;
    string s1,val;
    while(cin>>s1){
        if(s1=="0") break;
        val=add(s1, tot);
    }
    pString(val);

    return 0;
}
