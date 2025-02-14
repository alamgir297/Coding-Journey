#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    string s1,s2;
    while(cin>>s1){
        cin>>s2;
        string str="";
        if(s1.size()<s2.size()) swap(s1,s2);
        int len1=s1.size(), len2=s2.size(), totLen=len1+len2,cnt=0;
        for(int i=len1-len2; i<len1; i++) str+=s1[i];
        for(int i=len2-1; i>=0; i--){
            if(s2[i]==str[i]) cnt+=2;
            else break;
        }
        cout<<totLen-cnt<<endl;
    }
    return 0;
}
