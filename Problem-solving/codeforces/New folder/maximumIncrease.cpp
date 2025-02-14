#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int n,ar[10009],cnt=1,x,temp;
    cin>>n;
    int mx=1;
    cin>>x;
    temp=x;
    for(int i=0; i<n-1; i++){
        cin>>x;
        if(x>temp){
            cnt++;
            temp=x;
            if(cnt>mx) mx=cnt;
        }
        else{
            temp=x;
            cnt=1;
        }
    }
//    for(int i=0; i<n-1; i++){
//        int temp=ar[i];
//        if(temp<ar[i+1]){
//            cnt++;
//            if(cnt>=mx) mx=cnt;
//        }
//        else{
//            cnt=1;
//        }
//    }
    cout<<mx<<endl;
    return 0;
}
