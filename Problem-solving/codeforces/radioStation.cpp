#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,m;
    string s1, s2;
    scanf("%d%d", &n, &m);
    vector<string>name1,ip1, name2,ip2;
    for(i=0; i<n; i++){
        cin>>s1>>s2;
        name1.push_back(s1);
        ip1.push_back(s2);
    }
    for(i=0; i<m; i++){
        cin>>s1>>s2;
        s2.pop_back();
        name2.push_back(s1);
        ip2.push_back(s2);
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(ip2[i]==ip1[j]){
                cout<<name2[i]<< " "<<ip2[i]<< "; #"<<name1[j];
                cout<<endl;
            }
        }
    }

    return 0;
}
