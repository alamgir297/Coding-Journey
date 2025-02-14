#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int findEven(string s){
    int pos;
    for(int i=0; i<s.size(); i++){
        int digit= s[i]-'0';
        if(digit%2==0){
            pos=i;
            return pos;
        }
    }
    return -1;
}
int checkForEven(string s){
    int len=s.size()-1;
    int t= s[len]-'0';
    if(t%2==0) return 1;
    else
        return -1;
}
int main()
{
    int t,pos,flag;
    cin>>t;
    string s;
    while(t--){
        flag=0;
        cin>>s;
        pos=findEven(s);
        if(pos==-1 && checkForEven(s)==-1) printf("-1\n");
        else if(checkForEven(s)==1) printf("0\n");
        else if(pos==0) printf("1\n");
        else printf("2\n");
    }
    return 0;
}
