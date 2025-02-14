#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t;
    cin>>t;
    string s,str1,str2,tmp;
    while(t--){
        cin>>s;
        tmp=s;
        int counter=0;
        str1= "",str2= "";
        sort(s.begin(), s.end());
        str1+=s[0];
        for(int i=0; i<tmp.size(); i++){
            if(tmp[i]!=str1[0]){
                str2+=tmp[i];
            }
            else if(tmp[i]==str1[0] && counter==0){
                counter++;
                continue;
            }
            else str2+=tmp[i];
        }
        cout<<str1<< " "<<str2<<endl;
    }
    return 0;
}
