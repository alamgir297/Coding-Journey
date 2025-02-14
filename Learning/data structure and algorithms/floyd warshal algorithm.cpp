#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 10000
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;

int main()
{
    //fastIO();
    int edges, nodes, x,y,cost;
    cin>>nodes>>edges;
    int table[nodes+2][nodes+2];
    for(int i=1; i<=nodes; i++){
        for(int j=1; j<=nodes; j++){
            if(i==j) table[i][j]=0;
            else
            table[i][j]=max_size;
        }
    }
    for(int i=0; i<edges; i++){
        cin>>x>>y>>cost;
        table[x][y]=cost;
    }
    for(int k=1; k<=nodes; k++){
        for(int i=1; i<=nodes; i++){
            for(int j=1; j<=nodes; j++){
                table[i][j]=min(table[i][j], table[i][k]+table[k][j]);
            }
        }
    }
    newline;newline;
    for(int i=1; i<=nodes; i++){
        for(int j=1; j<=nodes; j++){
            cout<<table[i][j]<<space<<space;
        }
        newline;
    }
    while(1){
        cin>>x>>y;
        cout<< "cost of "<<x<< " to "<<y<< " is "<<table[x][y]<<endl;
    }

    return 0;
}
//1 2 3
//1 5 -4
//2 4 1
//2 5 7
//3 2 4
//4 1 2
//4 3 -5
//5 4 6
//1 3 8
