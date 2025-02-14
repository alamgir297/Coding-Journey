#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 2000000
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
//vector<string> fizzBuzz(int n) {
//    vector<string> v(n);
//    for(int i=1; i<=n; i++){
//        if(i%3==0 && i%5==0){
//            v[i]= "FizzBuzz";
//        }
//        else if(i%3==0) v[i]="Fizz";
//        else if(i%5==0) v[i]="Buzz";
//        else{
//            string s=to_string(i);
//            v[i]=s;
//        }
//    }
//    return v;
//}
//vector<string> fizzBuzz(int n) {
//    vector<string> v(n);
//    for(int i=0; i<n; i++){
//        if( (i+1)%3==0 && (i+1)%5==0){
//            v[i]= "FizzBuzz";
//        }
//        else if((i+1)%3==0) v[i]="Fizz";
//        else if( (i+1)%5==0) v[i]="Buzz";
//        else{
//            string s=to_string(i+1);
//            v[i]=s;
//        }
//    }
//    return v;
//}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
    return (a.second<b.second);
}
vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    int cnt=0;
    vector<pair<int,int>> vec;
    vector<int> ans;
    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[i].size(); j++){
            if(mat[i][j]==1) cnt++;
        }
        vec.push_back({i,cnt});
        cnt=0;

    }
    sort(vec.begin(), vec.end(), sortbysec);
    for(int i=0; i<k; i++){
        ans.push_back(vec[i].first);
    }
    for(auto it: ans){
        cout<<it<<space;
        newline;
    }
    return ans;
}
int main()
{
    //fastIO();
    int n,m,k;
    while(cin>>n>>m>>k){
        vector<vector<int>> mat;
        for(int i=0; i<m; i++){
            vector<int>v;
            for(int j=0; j<n; j++){
                int x;
                cin>>x;
                v.push_back(x);
            }
            mat.push_back(v);
        }
        kWeakestRows(mat,k);
//        for(int i=0; i<mat.size(); i++){
//            for(int j=0; j<mat[i].size(); j++){
//                cout<<mat[i][j]<<space;
//            }
//            newline;
//        }
    }
    return 0;
}
