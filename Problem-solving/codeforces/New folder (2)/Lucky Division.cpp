#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
vector<int>v;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void generateLucky(){
    int x,flag=0; string s;
    for(int i=4; i<800; i++){
        flag=0;
        s=to_string(i);
        for(int i=0; i<s.size(); i++){
            if(s[i]=='4' || s[i]=='7') flag=1;
            else{
                flag=0;
                break;
            }
        }
        if(flag) v.push_back(i);
    }
}
int main()
{
//    fastIO();
    generateLucky();
    string s;
    while(cin>>s){
        int x=stoi(s),flag=0;
        if(binary_search(v.begin(), v.end(), x)) flag=1;
        else{
            for(int i=0; i<v.size(); i++){
                if(x%v[i]==0){
                    flag=1;
                    break;
                }
            }
        }
        if(flag) cout<< "YES\n";
        else cout<< "NO\n";
        cout<<v.size()<<endl;
    }
    return 0;
}
