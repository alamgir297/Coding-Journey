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
//    fastIO();
    int n,sum,total,x,cnt;
    while(cin>>n){
        sum=0,total=0,cnt=1;
        vector<int>v;
        for(int i=0; i<n; i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0; i<n; i++){
            sum+=v[i];
//            cout<<sum<<endl;
            for(int j=i+1; j<n; j++) total+=v[j];
//            cout<<total<<endl;
            if(sum<=total){
                cnt++;
//                cout<<cnt<<endl;
                total=0;
            }
            else break;
        }
        cout<<cnt<<endl;
        v.clear();
    }
    return 0;
}
//10
//5 4 3 2 5 7 3 1 1
