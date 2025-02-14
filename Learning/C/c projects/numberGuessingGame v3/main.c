#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring variables
    int rndNum=0;
    int guessedNum=0;
    int x;

    //generating random number
    srand(time(NULL));
    rndNum=(rand() %20)+1;
    printf("\tNumber guessing game v3\n");
    printf("I have guessd a Number between 10 to 20\n");
    printf("you have to guess it right\n");

    //asking the user to guess the number
    for(x=5; x>0; x--){
        printf("You have %d tr%s left.\n",x, x==1 ? "y" : "ies");
        printf("Enter a number between 0 to 20:");
        scanf("%d",&guessedNum);

            if(guessedNum==rndNum){
                printf("Congrats! You guessed it\n");
                break;
            }
            else if(guessedNum<0 || guessedNum>20){
                printf("\nI said between 0 and 20\n\n");
            }
            else if(guessedNum<rndNum){
                printf("\nmy number is bigger than that\n\n");
            }
            else if(guessedNum>rndNum){
                printf("\nmy number is less than that\n\n");
            }
    }

    return 0;
}
