#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;
int checkDistinct(string n){
    int flag=0,num=stoi(n);
    for(int i=0; i<n.size(); i++){
        for(int j=0; j<n.size(); j++){
            if(n[i]==n[j] && i!=j) return 0;
            else if(n[i]!=n[j] && i!=j) flag=1;
        }
    }
    if(flag==1) return 1;
}

int main()
{
    string n,m;
    while(cin>>n){
        int y=stoi(n)+1;
        for(int i=y; ;i++){
            m=to_string(i);
            if(checkDistinct(m)==1){
                cout<<m<<endl;
                break;
            }
        }
    }
    return 0;
}
