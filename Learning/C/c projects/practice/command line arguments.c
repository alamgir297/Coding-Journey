#include <stdio.h>

int main(int argc, char *argv[])
{
    int numberOfArguments =argc;
    char *argument1 =argv[0];
    char *argument2 =argv[1];

    printf("number of argument is %d\n",numberOfArguments);
    printf("the name of the program is %s\n",argument1);
    printf("command line argument is %s\n",argument2);



}
