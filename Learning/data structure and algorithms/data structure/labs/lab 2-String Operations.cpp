#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2,s3;
	int select;
	while(1){
        cout<< "1.\tLength of a String\n";
        cout<< "2.\tConcatenate Strings\n";
        cout<< "3.\tCompare Strings\n";
        cout<< "4.\tReverse String\n";
        cout<< "5.\tSearch substring\n";
        cout<< "6.\tReplace substring\n";
        cout<< "7.\tExit program (-1)\n";
        cout<< "Select: ";
        cin>>select;
        if(select==1){
            cout<< "\nEnter a string\n";
            cin>>s1;
            cout<< "length of string is : "<< s1.size()<< "\n";
        }
        else if(select==2){
            cout<< "\nEnter two strings\n";
            cin>>s1>>s2;
            cout<< "After concatenation : "<< s1+s2<< "\n";
        }
        else if(select==3){
            cout<< "\nEnter two strings\n";
            cin>>s1>>s2;
            if(s1==s2) cout<< "Both strings are same\n";
            else cout<< "Strings do not match\n";
        }
        else if(select==4){
            cout<< "\nEnter a string\n";
            cin>>s1;
            reverse(s1.begin(), s1.end());
            cout<< "Reversed string: "<<s1<<endl;
        }
        else if(select==5){
            cout<< "\nEnter a string\n";
            cin>>s1;
            cout<< "Enter substring to search: ";
            cin>>s2;
            int found=s1.find(s2);
            if(found!= string::npos) cout<< "found "<<s2<< " at position "<<found<<endl;
            else cout<< s2<< " not available in string "<<s1<< "\n";
        }
        else if(select==6){
            cout<< "\nEnter a string\n";
            cin>>s1;
            cout<< "Enter substring to replace: ";
            cin>>s2;
            int found=s1.find(s2);
            cout<< "Enter text: ";
            cin>>s3;
            s1.replace(found, s3.size()-1, s3);
            cout<< "after replacement= "<<s1<<endl;
        }
        else if(select==7){
            cout<< "Thanks!\n";
            break;
        }
        else cout<< "Chose a valid option\n";

	}
    return 0;
}

