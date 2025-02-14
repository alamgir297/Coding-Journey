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
//    fastIO();
    string s;
    while(getline(cin,s)){
        int cnt=0;
        set<char>sett;
        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z') sett.insert(s[i]);
        }
        cout<<sett.size()<<endl;
    }
    return 0;
}
