#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;
int main()
{
    int t;
    cin>>t;
    string x1,x2;
    ll p1,p2;

    while(t--){
        cin>>x1>>p1;
        cin>>x2>>p2;
        int X1=x1.size(), X2=x2.size();
        int dig1=X1+p1, dig2=X2+p2;

        if(dig1>dig2) printf(">\n");
        else if(dig1<dig2) printf("<\n");
        else if(dig1==dig2){
            if(X1<=X2){
                for(int i=0; i<X2; i++){
                    if(x1[i]>x2[i]){
                        printf(">\n");
                        break;
                    }
                    else if(x1[i]<x2[i]){
                        printf("<\n");
                        break;
                    }
                     else if(i==X2-X1){
                            printf("=\n");
                            break;
                    }
                }
            }
            else if(X1>X2){
                for(int i=0; i<X1; i++){
                    if(x1[i]<x2[i]){
                        printf("<\n");
                        break;
                    }
                    else if(x1[i]>x2[i]){
                        printf(">\n");
                        break;
                    }
                     else if(i==X1-X2){
                            printf("=\n");
                            break;
                    }
                }
            }
        }

    }
    return 0;
}
