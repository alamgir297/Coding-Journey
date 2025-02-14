#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char name[15];
    int id;
    char favSub[15];
    int mark;
};
struct student student1, student2;

int main()
{
    int i,j,n;
    FILE *fStudent;
    fStudent=fopen("student.txt", "ab");
    fgets(fStudent, "%d",&j);
    return 0;
}
