/* SNAKE, WATER, GUN Game {Made by DHANU YADAV}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displaychoice(int choice){ // user defined function for display the choice 
    if(choice == 0){
        printf("Snake.\n");
    }
    else if(choice == 1){
        printf("Water.\n");
    }
    else if(choice == 2){
        printf("Gun.\n");
    }
}
int main()
{
    int player, computer;
    /*
    0. --> Snake/Scissor
    1. --> Water/Paper
    2. --> Gun/Rock
    */

    // Seed the random number generator between 0 to 2
    srand(time(0));
    computer = rand() % 3;

    while (1)
    {
        // ENtering player's choice
        printf("Enter your Choice[0/Snake, 1/Water and 2/Gun]: ");
        scanf("%d", &player);
        
        //display player's choice
        printf("Your choice: ");
        displaychoice(player);
        
        //display computer's choice
        printf("Computer's choice: ");
        displaychoice(computer);

        // Input Validation
        if (player < 0 || player > 2)
        {
            printf("Please enter valid input.\n");
            continue;;
        }
        else if (computer == player) // tie case
        {
            printf("It's a Tie!!.\n");
            break;
        }
        else if (computer == 0 && player == 2) // condition 1
        {
            printf("Horray, Winner!!.\n");
            break;
        }
        else if (computer == 1 && player == 0) // condition 2
        {
            printf("Horray, Winner!!.\n");
            break;
        }
        else if (computer == 2 && player == 1) // condition 3
        {
            printf("Horray, Winner!!.\n");
            break;
        }
        else // losing condtion
        {
            printf("Hahaha, Loser!!");
            break;
        }
    }
    return 0;
}