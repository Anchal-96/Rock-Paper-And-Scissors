#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber (int n)
{

    srand(time(NULL));
    return rand() % n;
}
int greater(char p1, char p2)
{
    if ( p1 ==  p2)
    {
        return -1;
    }
     if ( p1 == 'r' &&  p2 == 's')
    {
        return 1;

    }
    else 
    {
        return 0;
    }
    
     if ( p1 == 'p' &&  p2 == 'r')
    {
        return 1;
    }
    else 
    {
        return 0;
    }
     if ( p1 == 's' &&  p2 == 'p')
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int main()
{
    while (1)
    {
        int player_score = 0, Comp_Score = 0, temp;
        char *ptr[24];
        char playerChar, CompChar;
        char dict[] = {'r', 'p', 's'};
        srand(time(NULL));

        printf("WELCOME TO ROCK  & SCISSORS GAME\n");
        printf("**********************************\n");

        for (int i = 0; i < 3; i++)
        {
         
          // Now take the input from player1//
            printf("Player's name:\n");
            scanf("%s", &ptr);
            getchar();

            printf("Press 1 for Rock \n");
            printf("Press 2 for paper \n");
            printf("Press 3 for Scissors \n");

            printf("Player's turn:\n");
            scanf("%d", &temp);
            getchar();
            playerChar = dict[temp - 1];
            printf("---------------------------------------\n");
            printf("You choose: %c\n", playerChar);

            // Now take input from computer//
            
            printf("Computer's turn:\n");
            printf("Press 1 for Rock \n");
            printf("Press 2 for paper \n");
            printf("Press 3 for Scissors \n");
            getchar();
            temp = generateRandomNumber (3) + 1;
            CompChar = dict[temp - 1];
            printf("The random number between 1 to 3 is %d\n",generateRandomNumber(3)+1);
            printf("-----------------------------------\n");
            printf("Computer choose: %c\n", CompChar);

            printf("---------------------------------------\n");
            // computer character and increment the score//
            if (greater(CompChar, playerChar) == 1)
            {
                Comp_Score++;

                printf("\t\tComputer Got It!\n\n");
            }
            else if (greater(CompChar, playerChar) == -1)
            {
                Comp_Score++;
                player_score++;

                printf("\t\t It's a draw. Both got 1 point\n\n");
            }
            else
            {
                player_score++;
                printf("\t\tYou got It!\n\n");
            }

            printf("----------------------------------\n");
            printf("You : %d\n", player_score);
            printf("Computer: %d\n", Comp_Score);

            printf("-------------------------------------------\n\n");
            printf("==========================================================\n\n");
            printf("---------------------------------------------\n\n");

            printf("Final score\n");
            printf("--------------------------\n");
            printf("|You | Computer |\n");
            printf("%d %d\n", player_score, Comp_Score);
            printf("---------------------------------\n");

            // Compare score
            if (player_score > Comp_Score)
            {
                printf("\t %s win the match\n", ptr);
            }
            else if (player_score < Comp_Score)
            {
                printf("\t Computer win the match\n");
            }
            else
            {
                printf("\t It's a draw\n");
            }
        }
        return 0;
    }
}