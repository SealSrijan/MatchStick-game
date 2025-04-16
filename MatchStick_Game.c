#include <stdio.h>
#include <conio.h>
int main()
{
    int user_pick, comp_pick, matchstick = 21;
    char name[100] ;
    char ans;
    printf("Welcome to the MATCHSTICK GAME.\n\n");
    printf("Do you want to play? (y/n): ");
    scanf("%c", &ans);
    if (ans == 'y')
    {
       printf("\n\nRules for the game are as follows.\n 1.There are 21 matchsticks.\n 2.You are allowed to pick(choose) only 1 or 2 or 3 or 4 matchsticks at a time.\n");
    printf(" .\n\n");
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("\nPress enter to play.");
    getch();
    while (matchstick > 1)
    {
        printf("\n\nRemaining matchstick: %d\n", matchstick);
        printf("%s: ", name);
        scanf("%d", &user_pick);

        while ( user_pick < 1 || user_pick > 4)
        {
            printf("Invalid Input. Choose 1, 2, 3 or 4 matchstick.");
            scanf("%d", &user_pick);
        }
        matchstick -= user_pick;
            comp_pick = 5- user_pick;
            printf("System: %d", comp_pick);
            matchstick -= comp_pick;
    }
    printf("\n\nRemaining matchstick: 1. \nYou pick the last one.\n");
    printf("\nSystem wins.!\n You lose.. \n");
    }

    else if (ans == 'n')
        printf("Bad choice. \nSad to see you go!\n");
    else
        printf("Wrong choice.\n");
        getch();

    return 0;

}