#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,a, downvote=0,i;
	cin>>t;
	while(t--){
        int upvote=0;
        scanf("%d", &n);
        while(n--){
            scanf("%d", &a);
            if(a==1 || a==3) upvote++;
        }
        cout<<upvote<< "\n";
	}
    return 0;
}
