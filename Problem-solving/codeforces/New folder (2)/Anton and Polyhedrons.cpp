#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define space " "
#define newline printf("\n")

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    string s, Tetrahedron="Tetrahedron",Cube="Cube";
    string Octahedron="Octahedron", Dodecahedron="Dodecahedron", Icosahedron="Icosahedron";
    ll n,total=0;
    cin>>n;
    while(n--){
        cin>>s;
        if(s==Tetrahedron) total+=4;
        else if(s==Cube) total+=6;
        else if(s==Octahedron) total+=8;
        else if(s==Dodecahedron) total+=12;
        else if(s==Icosahedron) total+=20;
    }
    cout<<total<<endl;
    return 0;
}
