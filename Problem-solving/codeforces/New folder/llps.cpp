#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    string s;
    while(cin>>s){
        int ar[27]={0};
        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                int d=s[i]-'a';
                ar[d]++;
            }
        }
        for(int i=25; i>=0; i--){
            if(ar[i]>0){
                for(int j=0; j<ar[i]; j++){
                    printf("%c",i+'a');
                }
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}
