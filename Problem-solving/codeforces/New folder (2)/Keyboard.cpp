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
    int n,x;
    char ch;
    while(cin>>ch){
        string s, str="";
        string row1="qwertyuiop", row2="asdfghjkl;", row3="zxcvbnm,./";
        cin>>s;
        int tmp;
        if(ch=='R') tmp=-1;
        else tmp=1;
        for(int i=0; i<s.size(); i++){
            char x=s[i];
            for(int j=0; j<row1.size(); j++){
                if(row1[j]==s[i]){
                    str+=row1[j+tmp];
                    break;
                }
            }
            for(int k=0; k<row2.size(); k++){
                if(row2[k]==x){
                    str+=row2[k+tmp];
                    break;
                }
            }
            for(int l=0; l<row3.size(); l++){
                if(row3[l]==x){
                    str+=row3[l+tmp];
                    break;
                }
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
