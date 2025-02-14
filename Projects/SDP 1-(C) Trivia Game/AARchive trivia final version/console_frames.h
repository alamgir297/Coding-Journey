#ifndef CONSOLE_FRAMES_H_INCLUDED
#define CONSOLE_FRAMES_H_INCLUDED
#define clear_screen system("cls")



#endif // CONSOLE_FRAMES_H_INCLUDED
void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;

    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds);
}
void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}



void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void change_BG(){
  SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED |
                                                            FOREGROUND_GREEN |
                                                            FOREGROUND_INTENSITY |
                                                            BACKGROUND_GREEN
                          );
}

void print_box()
{
    color(7);
    printf("%c",201);
    for(int i=0; i<109; i++){
        color(7);
        printf("%c",205);
    }
    color(7);
    printf("%c\n", 187);
    for(int i=0; i<28; i++){
        color(7);
        printf("%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c\n", 186,186);
    }
    printf("%c",200);
    for(int i=0; i<109; i++)printf("%c",205);
    printf("%c\n", 188);
}
void print_Small_Box(){
    color(7);
    int x=27, y=12;
    gotoxy(x,y);
     printf("%c",201);
    for(int i=0;i<55;i++)
        printf("%c",205);
    printf("%c",187);
    for(int i=1;i<=4;i++){
        gotoxy(x-1,i+y);
        printf("%c",186);
        gotoxy(84,i+y);
        printf("%c",186);
    }
    gotoxy(x,17);
    printf("%c",200);
    for(int i=0;i<55;i++)
        printf("%c",205);
    printf("%c",188);
}

void print_title_box(int x, int y, int len){
    int z=x-1, w=y+1;
    color(7);

    gotoxy(x-1,y);
    printf("%c", 201);
    gotoxy(x,y); //9
    color(7);
    for(int i=0; i<len; i++) printf("%c", 205); printf("%c",187);
    gotoxy(x-1,y+2); printf("%c", 200);
    for(int i=0; i<len; i++) printf("%c", 205); printf("%c\n", 188);

    gotoxy(z, w);
    printf("%c\n",186);
    gotoxy(z+len+1, w);
    printf("%c\n",186);
}


void print_Menu_title(char title[], int padding){
    int x=34, y=2, len=40;
    gotoxy(x,y);
     printf("%c",201);
    for(int i=0;i<len;i++)
        printf("%c",205);
    printf("%c",187);
    gotoxy(x,y);
    for(int i=1;i<3;i++){
        gotoxy(x, y+i);
        printf("%c\n",186);
    }
    for(int i=1;i<3;i++){
        gotoxy(x+len+1, y+i);
        printf("%c\n",186);
    }
    gotoxy(x,y+3);
     printf("%c",200);
    for(int i=0;i<len;i++)
        printf("%c",205);
    printf("%c",188);
    gotoxy(x+15+padding, y+1);
    color(6);
    printf("%s\n", title);
}
void greet()
{
    print_box();
    print_Menu_title("LOADING", 2);
    print_Small_Box();
    color(3);
//    sound_Loading();
    int x=44,y=12,len=23;
    for (int i=5; i<=100; i+=5)
    {
        gotoxy(42,12);
        printf("\n\t\t\t\t\t   Loading.....%d Percent",i);
        gotoxy(++x,y+3);
        printf("%c", 178);
        Sleep(155);
//        clear_screen;
    }
    printf("\n");
    printf("\t\t\t\t\t       Loading Complete");
    delay(3);
}

void Welcome(char name[], int x, int y){
    int ln,ln1;
    ln=strlen(name);
    ln1=ln+9;
    char name1[ln1];
    color(3);
    printf("\n");
    strcpy(name1,"Welcome ");
    strcat(name1,name);
    gotoxy(x,y);
    color(3);
    for(int i=0; i<ln1-1; i++){
        Sleep(50);
        color(3);
        printf("%c",name1[i]);
        if(i%3==0)
            Sleep(50);
        if(i==7)
            color(0);
    }
}

void load_welcomePage(){
    sound_Successful();
    print_box();
    print_Menu_title("WELCOME",2);
    print_Small_Box();
    color(2);
    int x=41, y=13;
    Welcome("To AARchive Trivia Game",x,y);
    gotoxy(x+3, y+2);
    printf("Press Enter to continue>>");
    getchar();
}
void load_MainMenu_frame(int n, int padding){
    sound_Menu();
    print_box();
    print_Menu_title("Main Menu",1);
    int x=42, y=8, len=26;
    for(int i=0; i<n; i++){
        print_title_box(x, y+i*padding, len);
    }
}


void load_login_frame(){
    sound_Popup();
    print_box();
    print_Menu_title("LOGIN",3);
    int x=41, y=10, len=33, pad=3;
    print_title_box(x-pad, y+1, len);
    color(2);
    gotoxy(x, y+2);
    color(2);
    gotoxy(x, y+5);
}

void load_registration_frame(){
    sound_Popup();
    print_box();
    print_Menu_title("REGISTER NOW",-1);
    int x=42, y=10, len=33, pad=3;
    print_title_box(x-pad, y+1, len);
    color(0);
    gotoxy(x, y+2);
    color(7);
    gotoxy(x, y+5);
}


void load_loginSuccess_frame(char name[]){
    clear_screen;
    sound_Successful();
    print_box();
    print_Menu_title("LOGIN SUCCESSFULL",-3);
    print_Small_Box();
    int x=41, y=13;
    Welcome(name,x+5,y);
    color(3);
    gotoxy(x,y+3);
    printf("Your game will start now....");
    delay(3);
}


void load_category_frame(int n, int padding){
    sound_Menu();
    print_box();
    print_Menu_title("CATEGORY",0);
    int x=42, y=8, len=26;
    for(int i=0; i<n; i++){
        print_title_box(x, y+i*padding, len);
    }
}

void load_categoryFinished_frame(){
    sound_Popup();
    print_box();
    print_Menu_title("CATEGORY",0);
    print_Small_Box();
    int x=41, y=13;
    color(3);
    gotoxy(x,y);
    printf("You have finished this category");
    gotoxy(x+2, y+2);
    printf("Please choose another one>>");
//    getchar();
}

void load_score_frame(int score){
    sound_Score();
    print_box();
    print_Menu_title("Score",3);
    print_Small_Box();
    int x=37, y=13, len=25,z=42,w=7;
    print_title_box(z,w,len);
    gotoxy(z+3, w+1);
    color(2);
    printf("Your score is -> %d", score);
    color(3);
    gotoxy(x-4,y);
    printf("Thanks for playing. Please, come back later..");
    gotoxy(x, y+2);
    printf("Press enter to go back to category>>");
//    getchar();
}

void load_finalScore_frame(int score){
    sound_Fnished();
    print_box();
    print_Menu_title("CONGRATULATIONS!",-2);
    print_Small_Box();
    int x=41, y=13, len=30,z=40,w=7;
    print_title_box(z,w,len);
    gotoxy(z+3, w+1);
    color(2);
    printf("You have finished the game");
    color(3);
    gotoxy(x-4,y);
    printf("Your final score is -> %d out of 90", score);
    gotoxy(x, y+2);
    printf("Press enter to continue>>");
//    getchar();
}
void load_leaderBoard_frame(int numOfPlayer, int padding){
    sound_Popup();
    clear_screen;
    print_box();
    print_Menu_title("LEADERBOARD",1);
    int x=47,y=6;
    gotoxy(x,y);
    color(3);
    printf("Score out of 90");
//    color(7);
}

void load_leaderBoardNoPlayer_frame(){
    sound_Popup();
    print_box();
    print_Menu_title("LEADERBOARD", 1);
    print_Small_Box();
    int x=39, y=13, len=25,z=42,w=7;
    gotoxy(x-4,y);
    printf("Currently no players are playing the game");
    gotoxy(x+4, y+2);
    printf("<<Come back again later>>");

}

void load_quit_frame(){
    sound_Popup();
    print_box();
    print_Menu_title("QUIT", 4);
    int x=44, y=11, len=13, pad=3;
    print_title_box(x-5, y-4, len+19);
    gotoxy(x-4,y-3);
    printf("Are you sure you want to quit?");
    print_title_box(x+5, y, len);
    print_title_box(x+5, y+pad, len);
}

void load_logout_frame(){
    sound_Popup();
    print_box();
    print_Menu_title("LOGOUT", 2);
    int x=44, y=11, len=13, pad=3;
    print_title_box(x-6, y-4, len+21);
    gotoxy(x-5,y-3);
    printf("Are you sure you want to logout?");
    print_title_box(x+5, y, len);
    print_title_box(x+5, y+pad, len);
}

void load_question_frame(){
    sound_Popup();
    int x=20,y=1,len=30,padding=20;
    int z=32,w=8,pad=25,ln=22;
    print_title_box(40,y,len);
    color(6);
    gotoxy(50,y+1);
    printf("QUESTION");
    print_title_box(x-3, y+4, 76);

    print_title_box(42,w+7,25);
    gotoxy(45,w+8);
    printf("Press * to go back");

    print_title_box(z, w,ln);
    print_title_box(z+pad, w,ln);

    print_title_box(z, w+3,ln);
    print_title_box(z+pad, w+3,ln);

    color(2);
    print_title_box(z+7, w+10, len+1);
}

void load_finished_frame(){
    sound_Popup();
    print_box();
    print_Menu_title("GAME FINISHED", -2);
    int x=44, y=14, len=13, pad=3;
    int z=40, w=6, ln=30;

//    print_title_box(z, w, ln);
//    gotoxy(z+2,w+1);

    print_title_box(x-6, y-4, len+21);
    gotoxy(x-2,y-3);
    printf("Do you want to start over?");

    print_title_box(x+5, y, len);
    print_title_box(x+5, y+pad, len);
}

void load_erased_frame(){
    sound_Popup();
    print_box();
    print_Menu_title("FINISHED!", 2);
    print_Small_Box();
    int x=39, y=13, len=25,z=42,w=7;
    gotoxy(x,y);
    printf("All previous data has been erased");
    gotoxy(x+6, y+2);
    printf("<<Please log in again>>");
}
