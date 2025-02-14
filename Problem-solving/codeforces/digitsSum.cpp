#include <bits/stdc++.h>
using namespace std;
//long long int digitSum(long long int n){
//    long long int sum=0, rem;
//    while(n!=0){
//        rem=n%10;
//        sum+=rem;
//        n/=10;
//    }
//    return sum;
//}
//
int main()
{
	int t;
	cin>>t;
	while(t--){
        long long int n,m,cnt=0;
        cin>>n;
        if(n%10==9){
            cnt=(n/10)+1;
        }
        else cnt=n/10;
//        for(int i=9; i<=n; i+=10){
//           if(digitSum(i+1)<digitSum(i)){
//            cnt++;
//           }
//        }
        cout<<cnt<<endl;
	}
    return 0;
}
