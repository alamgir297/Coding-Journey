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
#define fastIO() ({\
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);\
})

using namespace std;

int main()
{
//    fastIO();
    int n;
    while(cin>>n){
        double sum=0;
        for(int i=0;i<n; i++){
            double x;
            cin>>x;
            sum+=x;
        }
        double ans=sum/(double)n;
        printf("%.12lf\n",ans);
    }
    return 0;
}
