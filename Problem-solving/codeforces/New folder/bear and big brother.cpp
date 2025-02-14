#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int weight1,weight2;
    while(cin>>weight1>>weight2){
        int cnt=0;
        while(weight1<=weight2){
            weight1*=3;
            weight2*=2;
            cnt++;
        }
        cout<<cnt<< "\n";
    }
    return 0;
}
