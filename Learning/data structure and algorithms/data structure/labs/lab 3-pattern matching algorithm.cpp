#include <bits/stdc++.h>
using namespace std;
void patSearch(string text, string pat){
    int i,j,k=0,flag=0;
    int lenOfText=text.size(), lenOfPat=pat.size();
    if(lenOfPat>lenOfText) cout<< "Impossible\n";
    else if(lenOfPat==lenOfText) cout<< "Pattern found at index 0\n";
    else{
        for(i=0; i<lenOfText-lenOfPat; i++){
            for(j=0; j<lenOfPat; j++){
                if(text[i+j]==pat[j]){
                    k++;
                }
                else{
                    k++;
                    break;
                }
            }
            if(j==lenOfPat){
                flag=1;
                cout<< "Pattern found at index "<<i<< "\n";
                break;
            }
        }
        if(flag==0) cout<< "Pattern not found\n";
        cout<< "Compared: "<<k<< " times\n";
    }
}
int main()
{
    string text, pat;
    cout<< "Enter text: ";
    cin>>text;
    cout<< "Enter pattern to search: ";
    cin>>pat;
    patSearch(text, pat);
    return 0;
}

