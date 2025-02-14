#include <iostream>
#include <string>
#include <cstring>

using namespace std;
class Registration{
public:
    int numOfSem;
    char courseName[100];
    void chooseCourse(int n, char c[100]);

};
void Registration::chooseCourse(int n, char c[100]){
    n=numOfSem;
    cout<< "Registered Courses\n";
    for(int i=0; i<n; i++){
        cout<< c[i]<< "\n";
//        printf("%s\n", c[i]);
    }
}

int main()
{
    Registration st1;
    int cNum, i;
    printf("How many course do you want? (at least 3)\n");
    cin>>cNum;
    char courseName[cNum];
    for(i=0; i<cNum; i++){
        cin>> courseName[i];
//        scanf("%s", courseName[i]);
    }
    st1.chooseCourse(cNum, *courseName[100]);
    return 0;
}
