#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;
string toLow(string s){
    string s1="";
    for(int i=0; i<s.size(); i++){
        s1+=tolower(s[i]);
    }
    return s1;
}

int main()
{
    string s1,s2,conv1,conv2;
    while(cin>>s1>>s2){
        conv1=toLow(s1);
        conv2=toLow(s2);
        if(conv1==conv2) printf("0\n");
        else if(conv1<conv2) printf("-1\n");
        else printf("1\n");
    }
    return 0;
}
