#include <stdio.h>

#include <string.h>

int main ()

{
User:
    printf("                               ______________________________________________________________________________________________\n");
    printf("                              |                                     Ganpat University                                        |\n");
    printf("                              |----------------------------------------------------------------------------------------------|\n");
    printf("                              |                                         PID:077                                              |\n");
    printf("                              |               Project Name:          ACCIDENT PREVENTION                                     |\n");
    printf("                              |                                     Subject: ESFP-1                                          |\n");
    printf("                              |                                        Batch: 12                                             |\n");
    printf("                              |                                  Enrollment No.: CS22                                        |\n");
    printf("                              |                                       Designed by                                            |\n");
    printf("                              |                                          Prathamsinh                                         |\n");
    printf("                              |______________________________________________________________________________________________|\n");
char id[50];



printf("Enter your id:\n");

scanf("%s", &id);

if (strcmp(id,"admin")==0)

{

printf("Id is correct\n");

}

else

{

printf("You have enetred an invalid user id\nPlease enter id again\n");

goto User;

}

char pass[50];

pass:

printf("Enter your password: ");

scanf("%s", &pass);

if(strcmp(pass,"admin0001")==0)

{

printf("You have successly loged in.\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

goto pass;

}
 int choice = -1;
    printf("\n\n\n\tACCIDENT PREVENTION.\n\n\t");
   
    // Menu display
    printf("\nMENU:\n1.HOME\n2. ABOUT\n3. contact\n4. EXIT");
   
    // Flag variable for termination of loop
    int flag = 1;
   
    // Infinite Loop for choice input
    while(flag){
        printf("\nEnter your choice:");
        scanf("%d", &choice);
       
        // Switch statements
        switch(choice){
            case 1:
                printf("> An accident prevention program is one which aims to avoid injury to personnel and / or damage to property, materials or, equipment.\n");
                break;
            case 2:
                printf(">Primary prevention: removal of circumstances causing injury - eg, traffic speed reduction, fitting stair gates for young children, reducing alcohol consumption. Secondary prevention: reduces severity of injury should an accident occur - eg, use child safety car seats, bicycle helmets, smoke alarms. Tertiary prevention: optimal treatment and rehabilitation following injuries - eg, effective first aid, appropriate hospital care.\n");
                break;
            case 3:
                printf(">ccident surveillance: health professionals and their organisations can monitor injury rates and report preventable accidents. NICE recommends establishing local protocols to alert health visitors, school nurses and GPs when a child or young person repeatedly needs treatment for unintentional injuries at an emergency department or minor injuries unit\n ");
                break;
                 case 4:
                printf("THANKS FOR VISITING!!!\n");
                flag = 0;  // To terminate the loop
                break;
            default:
                printf("> Invalid Input\n");
                break;
        }
    }

return 0;

}

