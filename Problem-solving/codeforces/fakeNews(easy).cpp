#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,st= "";
	int flag=0,ans=0;
	cin>>s;
	int len=s.size();
	for(int i=0; i<len; i++){
        if(s[i]!=s[i+1] &&(s[i]=='h'||s[i]=='e'||s[i]=='i'||s[i]=='d')) st+=s[i];
	}
	int len2=st.size();
	for(int i=0; i<st.size(); i++){
        if(flag) break;
        if(st[i]=='h'){
            for(int j=i+1; j<len2; j++){
                if(flag) break;
                if(st[j]=='e'){
                    for(int k=j+1; k<len2; k++){
                        if(flag) break;
                        if(st[k]=='i'){
                            for(int l=k+1; l<len2; l++){
                                if(flag) break;
                                if(st[l]=='d'){
                                    for(int m=l+1; m<len2; m++){
                                        if(st[m]=='i'){
                                            flag=1;
                                            ans=1;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
	}
	if(ans==1)
        cout<< "YES\n";
    else cout<< "NO\n";
    return 0;
}
