#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    string s;
    while(cin>>s){
        char ch;
        set<char>st;
        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i]))
                ch=s[i];
            st.insert(ch);
        }
        int sz=st.size();
        if(sz%2==0) printf("CHAT WITH HER!\n");
        else printf("IGNORE HIM!\n");
    }
    return 0;
}
