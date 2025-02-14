#include <bits/stdc++.h>
using namespace std;

class RemoveLetter{
public:
    void RemoveOperation(string s){
        string letters, withoutLetters;
        for(size_t i=0; i<s.length(); i++){
            if(isalpha(s[i])){
                letters[i]=s[i];
                cout<<letters[i];
            }
            else{
                withoutLetters[i]=s[i];
                cout<<withoutLetters[i];
            }
        }
    }
};

int main()
{
    RemoveLetter ltr;
    string s;
    cin>>s;
    ltr.RemoveOperation(s);
    return 0;
}
