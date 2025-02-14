#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int matrix[5][5],x,y,three=3,three1=3;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j]==1){
                x=i+1, y=j+1;
            }
        }
    }
    if(x>three) swap(x,three);
    x=three-x;
    if(y>three1) swap(y,three1);
    y=three1-y;
    printf("%d\n", x+y);
    return 0;
}
//0 0 0 0 0
//0 0 0 0 0
//0 0 0 0 0
//0 0 0 0 0
//1 0 0 0 0
