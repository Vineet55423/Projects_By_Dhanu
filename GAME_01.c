/* Number Guessing Game {made by DhANU YADAV}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int min = 1, max = 100;
    int guessed;
    int attempts = 1;
    // random number generator
    srand(time(NULL));
    int randomNumber = min + rand() % (max - min + 1);
    // Greeting and Start-UP
    printf("WELCOME! to the WORLD of Random Numbers\n");
    printf("Guess a random number between %d and %d.\n", min, max);

    while (1)
    {
        printf("Enter your guessed number: ");
        scanf("%d", &guessed);

        if (guessed < 1 || guessed > 100)
        {
            printf("Please enter a number between 1 and 100.\n");
            continue;
        }

        if (guessed > randomNumber)
        {
            printf("Lower number, please!\n");
        }
        else if (guessed < randomNumber)
        {
            printf("Higher number, please!\n");
        }
        else
        {
            printf("\nHooray! YOU GUESSED the number!\n");
            printf("You guessed the number in %d attempts.\n", attempts);
            break;
        }

        attempts++;
    }

    return 0;
}
