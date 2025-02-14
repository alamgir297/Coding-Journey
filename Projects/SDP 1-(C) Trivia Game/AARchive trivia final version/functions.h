#define path1 "C:\\Project"
#define path2 "C:\\Project\\Players"
#define limit 30

typedef struct data
{
    char questions[limit*9][100];
    char ans[limit*3][15];
} Data;



void generate_questions(Data* p1)
{
    FILE* fp;

    fp = fopen("input.txt","r");

    for(int i=0; i<(limit*9); i++)
        fgets(p1->questions[i],100,fp);


    fclose(fp);

    fp= fopen("ans.txt", "r");

    for(int i=0; i<limit*3; i++)
        fgets(p1->ans[i],15,fp);

    fclose(fp);
}


void get_password(char * pass)
{
    int i=0;
    char ch;
    color(2);
    sound_Select();
    printf("Password :- ");

    while(ch=getch())
    {
        if(ch==13)break;

        if(ch==8 && i>0)
        {
            printf("\b \b");
            pass[i]='\0';
            i--;
        }

        else if(ch!=8)
        {
            printf("*");
            pass[i]=ch;
            i++;
        }
    }
    pass[i]='\0';
}

int display_start_menu()
{
    int counter=1;
    char key;
    load_MainMenu_frame(4,3);
    int x=50, y=9;
    gotoxy(x,y);
    color(2);
    printf("1.Login");

    color(7);

    gotoxy(x,y+3);
    printf("2.Reigster");

    gotoxy(x,y+6);
    printf("3.Leader Board");


    gotoxy(x,y+9);
    printf("4.Quit");

    while(1)
    {
        key=_getch();

        if(key==72)
        {
            sound_Select();
            if(counter==2)
            {
                sound_Select();
                gotoxy(x,y+3);
                color(7);
                printf("2.Reigster");
                gotoxy(x,y);
                color(2);
                printf("1.Login");
                counter--;
            }
            else if(counter==3)
            {
                sound_Select();
                gotoxy(x,y+6);
                color(7);
                printf("3.Leader Board");
                gotoxy(x,y+3);
                color(2);
                printf("2.Reigster");
                counter--;
            }

            else if(counter==4)
            {
                sound_Select();
                gotoxy(x,y+9);
                color(7);
                printf("4.Quit");
                gotoxy(x,y+6);
                color(2);
                printf("3.Leader Board");
                counter--;
            }
        }

        if(key==80)
        {
            sound_Select();
            if(counter==1)
            {
                sound_Select();
                gotoxy(x,y);
                color(7);
                printf("1.Login");
                gotoxy(x,y+3);
                color(2);
                printf("2.Reigster");
                counter++;
            }
            else if(counter==2)
            {
                sound_Select();
                gotoxy(x,y+3);
                color(7);
                printf("2.Reigster");
                gotoxy(x,y+6);
                color(2);
                printf("3.Leader Board");
                counter++;
            }
            else if(counter==3)
            {
                sound_Select();
                gotoxy(x,y+6);
                color(7);
                printf("3.Leader Board");
                gotoxy(x,y+9);
                color(2);
                printf("4.Quit");
                counter++;
            }
        }

        if(key=='\r')
        {
            color(7);
            clear_screen;
            return counter;
        }
    }
}



bool display_quit_menu()
{
    clear_screen;
    int counter=1;
    char key;
    load_quit_frame();
    int x=44, y=12, len=23,pad=9;
    gotoxy(x+pad,y);
    color(2);
    printf("1.YES");
    gotoxy(x+pad,y+3);
    color(7);
    printf("2.NO");



    while(1)
    {
        key=_getch();

        if(key==72&&counter==2)
        {
            sound_Select();
            gotoxy(x+pad,y+3);
            color(7);
            printf("2.NO");
            gotoxy(x+pad,y);
            color(2);
            printf("1.YES");
            counter--;
        }

        if(key==80 && counter==1)
        {
            sound_Select();
            gotoxy(x+pad,y);
            color(7);
            printf("1.YES");
            gotoxy(x+pad,y+3);
            color(2);
            printf("2.NO");
            counter++;
        }

        if(key==13)
        {
            color(7);
            clear_screen;

            return counter==1?true:false;
        }


    }

}

bool display_logout_menu()
{
    clear_screen;
    int counter=1;
    char key;
    load_logout_frame();
    int x=45, y=12, len=23,pad=8;
    gotoxy(x+pad,y);
    color(2);
    printf("1.YES");
    gotoxy(x+pad,y+3);
    color(7);
    printf("2.NO");



    while(1)
    {
        key=_getch();

        if(key==72&&counter==2)
        {
            sound_Select();
            gotoxy(x+pad,y+3);
            color(7);
            printf("2.NO");
            gotoxy(x+pad,y);
            color(2);
            printf("1.YES");
            counter--;
        }

        if(key==80 && counter==1)
        {
            sound_Select();
            gotoxy(x+pad,y);
            color(7);
            printf("1.YES");
            gotoxy(x+pad,y+3);
            color(2);
            printf("2.NO");
            counter++;
        }

        if(key==13)
        {
            color(7);
            clear_screen;

            return counter==1?true:false;
        }


    }

}

bool display_finish_case_menu(int score)
{
    clear_screen;
    load_finalScore_frame(score);
    getch();
    clear_screen;
    int counter=1;
    char key;
    int x=49, y=15, len=13, pad=3;
    load_finished_frame();
    gotoxy(x+pad,y);
    color(2);
    printf("1.YES");
    gotoxy(x+pad,y+3);
    color(7);
    printf("2.NO");



    while(1)
    {
        key=_getch();

        if(key==72&&counter==2)
        {
            sound_Select();
            gotoxy(x+pad,y+3);
            color(7);
            printf("2.NO");
            gotoxy(x+pad,y);
            color(2);
            printf("1.YES");
            counter--;
        }

        if(key==80 && counter==1)
        {
            sound_Select();
            gotoxy(x+pad,y);
            color(7);
            printf("1.YES");
            gotoxy(x+pad,y+3);
            color(2);
            printf("2.NO");
            counter++;
        }

        if(key==13&&counter==1)
        {
            color(7);
            clear_screen;
            load_erased_frame();
            delay(2);

            clear_screen;
            return true;
        }

        if(key==13&&counter==2)
        {
            clear_screen;
            return false;
        }

    }

}

void registration()
{
    clear_screen;
    chdir(path2);
    int x=42, y=10, len=33, pad=3;
again:
    load_registration_frame();
    gotoxy(x, y+2);
    color(2);
    printf("Username :- ");

    char echo[100]="echo ";
    char pass[50];
    char ext[]=".txt";
    char name[35];
    char score[50]="s";
    char Pname[35];

    scanf(" %s",name);
    strcpy(Pname,name);
    strcat(name,ext);


    FILE* fp=fopen(name,"r");
    if(fp)
    {

        gotoxy(x-10,y+5);
        color(12);
        sound_Error();
        printf("Username already exists.Try a different one\n");
        color(7);
        delay(2);

        fclose(fp);
        clear_screen;
        goto again;
    }

    print_title_box(x-pad, y+4, len);
    gotoxy(x, y+5);
    get_password(pass);
    strcat(echo,pass);
    strcat(echo," >");
    strcat(echo,name);
    system(echo);

    fp=fopen("players.txt","a");
    fprintf(fp,"%s\n",Pname);
    fclose(fp);

    char echo2[]="echo ";
    strcat(score,name);
    strcat(echo2,"0 >");
    strcat(echo2,score);
    system(echo2);

    print_title_box(x+2, y-3, len-10);
    gotoxy(x+3, y-2);
    color(2); sound_Correct();
    printf("Registration Complete");
    delay(3);

    clear_screen;

    chdir(path1);
}

int category_menu()
{
    int counter=0;
    char key;
    load_category_frame(4,3);
    int x=50, y=9;

    gotoxy(x,y);
    color(2);
    printf("Science");

    color(7);

    gotoxy(x,y+3);
    printf("History");

    gotoxy(x,y+6);
    printf("Sports & IQ");

    gotoxy(x,y+9);
    printf("Logout");


    while(1)
    {
        key=_getch();

        if(key==72)
        {
            sound_Select();
            if(counter==1)
            {
                sound_Select();
                gotoxy(x,y+3);
                color(7);
                printf("History");
                gotoxy(x,y);
                color(2);
                printf("Science");
                counter--;
            }
            else if(counter==2)
            {
                sound_Select();
                gotoxy(x,y+6);
                color(7);
                printf("Sports & IQ");
                gotoxy(x,y+3);
                color(2);
                printf("History");
                counter--;
            }

            else if(counter==3)
            {
                sound_Select();
                gotoxy(x,y+9);
                color(7);
                printf("Logout");
                gotoxy(x,y+6);
                color(2);
                printf("Sports & IQ");
                counter--;
            }

        }

        if(key==80)
        {
            sound_Select();
            if(counter==0)
            {
                sound_Select();
                gotoxy(x,y);
                color(7);
                printf("Science");
                gotoxy(x,y+3);
                color(2);
                printf("History");
                counter++;
            }
            else if(counter==1)
            {
                sound_Select();
                gotoxy(x,y+3);
                color(7);
                printf("History");
                gotoxy(x,y+6);
                color(2);
                printf("Sports & IQ");
                counter++;
            }

            else if(counter==2)
            {
                sound_Select();
                gotoxy(x,y+6);
                color(7);
                printf("Sports & IQ");
                gotoxy(x,y+9);
                color(2);
                printf("Logout");
                counter++;
            }
        }

        if(key=='\r')
        {
            color(7);
            clear_screen;
            return counter;
        }
    }
}

int convertTo(int score, int to){
    int total=90,converted,x;
    x=(score*to);
    converted=(total+x-1)/total;
    return converted;
}
void display_leaderboard()
{
    system("cls");
    chdir(path2);
    FILE *fp,*fp2;

    int cnt=-1;
    int score[500]= {0};
    char name[20];
    char board[500][20];
    char ext[]=".txt";

    fp=fopen("players.txt","r");


    while(fgets(name,25,fp))
    {
        ++cnt;

        char sname[35]="s";

        int len=strlen(name)-1;
        name[len]='\0';

        strcat(sname,name);
        strcat(sname,ext);


        char num[5];

        fp2=fopen(sname,"r");

        fgets(num,5,fp2);



        fclose(fp2);



        score[cnt]=atoi(num);
        strcpy(board[cnt],name);
    }

    fclose(fp);

    int x=34,y=7,pad=1,padding=9;


    if(cnt==-1)
    {
        load_leaderBoardNoPlayer_frame();
    }

    else
    {
        for(int i=1; i<=cnt; i++)
        {
            int j=i;

            while(j>0&&score[j]>score[j-1])
            {
                int t;
                char ct[20];

                t=score[j];
                score[j]=score[j-1];
                score[j-1]=t;

                strcpy(ct,board[j]);
                strcpy(board[j],board[j-1]);
                strcpy(board[j-1],ct);

                j--;
            }
        }
        load_leaderBoard_frame(cnt+1,3);
//        color(3);
        for(int i=0; i<=cnt; i++)
        {
            gotoxy(x,y+i*pad);
            printf("%d.%s",i+1,board[i]);
            gotoxy(x+padding+4,y+i*pad);
            printf("%d\n",score[i]);

        }
        color(6);
        for(int i=0; i<=cnt; i++){
            int z=x+padding+5, w=y;
            int a=w+i*pad;
            gotoxy(z, a);
            int scr=convertTo(score[i],26);
            for(int j=1; j<=scr; j++){
                gotoxy(++z, a);
                printf("%c",254);
            }
        }
    }

    chdir(path1);
    print_title_box(41,y+cnt+1,29);
    color(3);
    gotoxy(43,y+cnt+2);
    printf("Press enter to go back>>");
    getch();
}

