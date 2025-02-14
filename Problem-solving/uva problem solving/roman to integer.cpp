#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 2000000
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
int romanToInt(string s) {
    string str= "";
    int ans=0;
    map<string, int> val;
    val["I"]=1, val["IV"]=4, val["V"]=5, val["IX"]=9, val["X"]=10, val["XL"]=40, val["M"]=1000;
    val["L"]=50, val["XC"]=90, val["C"]=100, val["CD"]=400, val["D"]=500, val["CM"]=900;
    for(int i=0; i<s.size();){
        str= "";
        str+=s[i], str+=s[i+1];
        if(val[str]!=0){
            ans+=val[str];
            i+=2;
            str= "";
        }
        else{
            str= "";
            str+=s[i];
            ans+=val[str];
            i++;
        }
    }
    return ans;
}
int main()
{
//    fastIO();
    string s;
    while(cin>>s){
        cout<<romanToInt(s)<<endl;
    }
    return 0;
}
