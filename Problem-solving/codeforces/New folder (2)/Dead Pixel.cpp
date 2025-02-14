 #include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
//    fastIO();
    int a,b,x,y,area,flag,t,row,row2;
    cin>>t;
    while(t--){
        cin>>a>>b>>x>>y;
        flag=0;
        if(b%2==0){
            if(y>=b/2) row=y;
            else{
                y++;
                row=b-y;
            }
        }
        else{
            if(y<=b/2){
                y++;
                row=b-y;
            }
            else row=y;
        }
        if(a%2==0){
            if(x>=a/2) row2=x;
            else{
                x++;
                row2=a-x;
            }
        }
        else{
            if(x<=a/2){
                x++;
                row2=a-x;
            }
            else row2=x;
        }
//        cout<<a<<space<<row<<endl;
        if(!flag)cout<<max(a*row, b*row2)<<endl;
    }
    return 0;
}
