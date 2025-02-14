#include<stdbool.h>
#include <unistd.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include "sounds.h"
#include "console_frames.h"
#include "functions.h"

int main()
{
    Data p1;
    FILE *fp,*fp2;

    load_welcomePage();
    clear_screen;
    greet();
    clear_screen;
    generate_questions(&p1);
    int temp;

start:
    clear_screen;
    temp=display_start_menu();


    if(temp==1)//if login selected
    {
        chdir(path2);
        load_login_frame();
        char ext[]=".txt";
        char pass[50];
        char name[30];
        char NAME[30];
        char nname[30]="s";
        char temp_pass[50];
        int x=41,y=10, ln=33, pad=3;
        gotoxy(x, y+2);
        printf("Username :- ");
        scanf("%s",name);
        strcpy(NAME, name);
        strcat(nname,name);
        strcat(nname,ext);
        strcat(name,ext);
        print_title_box(x-pad, y+4, ln);
        gotoxy(x, y+5);
        get_password(pass);


        fp=fopen(name,"r+");
        fgets(temp_pass,100,fp);


        int len=strlen(temp_pass)-2;
        bool flag=true;


        for(int i=0; i<len; i++)
            if(pass[i]!=temp_pass[i]||len!=strlen(pass))
            {
                flag=false;
                break;
            }


        if(fp==NULL||flag==false)
        {
            sound_Error();
            gotoxy(x, y+7);
            color(12);
            printf("Wrong username or password\n");
            color(7);
            delay(2);
            clear_screen;
            fclose(fp);
            chdir(path1);
            goto start;
        }

        load_loginSuccess_frame(NAME);
        clear_screen;

        char num[5];
        bool rep[limit*3]= {false};

        while(fgets(num,5,fp))
        {
            int dig=atoi(num);
            rep[dig]=true;

        }

        srand(time(0));
        int ans,score=0;


        fp2=fopen(nname,"r");

        char ts[5];
        fgets(ts,5,fp2);

        score=atoi(ts);

        fclose(fp2);


        char answer;

        printf("\n");

        flag=true;

        for(int i=0; i<(limit*3);i++)
            if(rep[i]==false)flag=false;


        if(flag)
        {
            fclose(fp);

            if(display_finish_case_menu(score))
            {
                char v[20];
                fp=fopen(name,"r");

                fgets(v,20,fp);

                fclose(fp);

                fp=fopen(name,"w");

                fprintf(fp,"%s",v);

                fclose(fp);

                fp=fopen(nname,"w");

                fprintf(fp,"%d\n",0);

                fclose(fp);

            }

            else chdir(path1);

            goto start;
        }

category:
        ;
        int s=category_menu();
        int z=limit;
        int came=limit;

        if(s==3)
            if(display_logout_menu())
            {
                rep[temp/3]=false;

                fclose(fp);

                fp2=fopen(nname,"w+");


                fprintf(fp2,"%d\n",score);

                fclose(fp2);

                chdir(path1);
                goto start;
            }
            else goto category;

        s*=limit;

        s--;

        flag=true;

        while(z--)
        {
            ++s;
            if(rep[s]==false)
            {
                flag=false;
                came--;
            }
        }

        s-=2;
        s/=limit;

        if(flag) //category finished
        {
            load_categoryFinished_frame();
            delay(2);
            clear_screen;
            goto category;
        }

        for(int i =came; i<limit;)
        {

            temp=rand()%limit;


            temp+=(s*limit);
            temp*=3;

            if(rep[temp/3]==false)
            {
                print_box();
                int x=20,y=1,len=30,padding=20;
                int z=32,w=8,pad=25,ln=22;
                color(3);

                gotoxy(x-2, y+5);
                printf("%s",p1.questions[temp]);

                gotoxy(z, w+1);
                printf("%s",p1.questions[temp+1]);

                gotoxy(z, w+4);
                printf("%s",p1.questions[temp+2]);

                load_question_frame();
                gotoxy(z+12, w+11);
                printf("Your answer:- ");
                scanf(" %c",&answer);
                getchar();
                if(answer=='*')
                {
                    i--;
                    clear_screen;
                    load_score_frame(score);
                    getchar();
                    clear_screen;
                    goto category;
                }
                rep[temp/3]=true;
                fprintf(fp,"%d\n",(temp/3));

                char* test=strrchr(p1.ans[temp/3],answer);

                if(test)
                {
                    sound_Correct();
                    print_title_box(z+13,w+13,20);
                    color(2);
                    gotoxy(z+15,w+14);
                    printf("Correct answer!!");
                    color(7);

                    delay(2);
                    score++;
                }
                else
                {
                    sound_Wrong();
                    print_title_box(z+13,w+13,20);
                    color(12);
                    gotoxy(z+15,w+14);
                    printf("Wrong answer!!");
                    color(7);
                    delay(2);
                }

                clear_screen;
                i++;
            }

        }

        fp2=fopen(nname,"w+");
        fprintf(fp2,"%d\n",score);
        fclose(fp2);

        flag=true;

        for(int i=0; i<(limit*3); i++)
            if(rep[i]==false)flag=false;

        if(flag)
        {
            fclose(fp);
            if(display_finish_case_menu(score))
            {

                char v[20];
                fp=fopen(name,"r");

                fgets(v,20,fp);

                fclose(fp);

                fp=fopen(name,"w");

                fprintf(fp,"%s",v);

                fclose(fp);

                fp=fopen(nname,"w");

                fprintf(fp,"%d",0);

                fclose(fp);

                chdir(path1);
            }
            goto start;
        }

        load_categoryFinished_frame();
        delay(2);
        clear_screen;

        goto category;
    }


    else if(temp==2)//if register selected
        registration();



    else if(temp==3)
        display_leaderboard();


    else if(temp==4)//if quit selected
        if(display_quit_menu())return 0;


    goto start;
}
