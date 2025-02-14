#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0;
        char states[100][30]={"ALABAMA","MONTGOMERY",
        "ALKSKA","JUNEAU",
        "Arizona","Phoenix",
        "Arkansas","Little Rock",
        "California","Sacramento",
        "Colorado","Denver",
        "Connecticut","Hartford",
        "Delaware","Dover",
        "Florida","Tallahassee",
        "Georgia","Atlanta",
        "Hawaii","Honolulu",
        "Idaho","Boise",
        "Illinois","Springfield",
        "Indiana","Indianapolis",
        "Iowa","Des Moines",
        "Kansas","Topeka",
        "Kentucky","Frankfort",
        "Louisiana","Baton Rouge",
        "Maine","Augusta",
        "Maryland","Annapolis",
        "Massachusetts","Boston",
        "Michigan","Lansing",
        "Minnesota","Saint Paul",
        "Mississippi","Jackson",
        "Missouri","Jefferson City",
        "Montana","Helena",
        "Nebraska","Lincoln",
        "Nevada","Carson City",
        "New Hampshire","Concord",
        "New Jersey","Trenton",
        "New Mexico","Santa Fe",
        "New York","Albany",
        "North Carolina","Raleigh",
        "North Dakota","Bismarck",
        "Ohio","Columbus",
        "Oklahoma","Oklahoma City",
        "Oregon","Salem",
        "Pennsylvania","Harrisburg",
        "Rhode Island","Providence",
        "South Carolina","Columbia",
        "South Dakota","Pierre",
        "Tennessee","Nashville",
        "Texas","Austin",
        "Utah","Salt Lake City",
        "Vermont","Montpelier",
        "Virginia","Richmond",
        "Washington","Olympia",
        "West Virginia","Charleston",
        "Wisconsin","Madison",
        "Wyoming","Cheyenne"};
for(i=0;i<100;i++)
{
    for(int j=0;states[i][j]!='\0';j++)
        states[i][j]=toupper(states[i][j]);
        }
char input[30];
bool flag=false;

printf("Enter the name of a capital of one of the capitals of United states\n");
scanf(" %s",input);

for(i=0;input[i]!='\0';i++)
    input[i]=toupper(input[i]);

for(i=1;i<100;i+=2)
    if(strcmp(input,states[i])==0)
        {
                flag=true;
                        break;
                            }
    if(flag)
        {
                printf("Correct!!\n\n\n");
                    }
    else printf("No such capital exists\n\n\n");

    printf("Now showing all the states and their capitals\n\n\n");
        for(i =0;i<100;i+=2)
            printf("%s\t%s\n",states[i],states[i+1]);
    printf("\n\n");

    for(i=1;i<98;i+=2)
         for(int j=i+2;j<100;j+=2)
             {
                     if(strcmp(states[i],states[j])>0)
                             {
                                         char temp[30];
                                                     strcpy(temp,states[i]);
                                                                 strcpy(states[i],states[j]);
                                                                             strcpy(states[j],temp);
            char temp2[30];
                        strcpy(temp2,states[i-1]);
                                    strcpy(states[i-1],states[j-1]);
                                                strcpy(states[j-1],temp2);
        }
            }
    printf("Now showing all the capital and their states in sorted order\n\n\n");
        for(i =0;i<100;i+=2)
            printf("%s \t %s\n",states[i+1],states[i]);
    int cnt=0;
    printf("Enter the capital of every state:-\n\n");

    for(i=0;i<100;i+=2)
        {
                char in2[30];
                        printf("%s :- ",states[i]);
                                scanf(" %s",in2);
        for(int j=0;in2[j]!='\0';j++)
                    in2[j]=toupper(in2[j]);
        if(strcmp(in2,states[i+1])==0)cnt++;
            }
    printf("\n\nYou got %d of the capital names right",cnt);
        return 0;
}

//12 42 4 6 234 121 6 1 5 33 19 4933 23 3 7
