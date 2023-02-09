#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, nguess = 1;
    srand(time(0));
    num = rand() % 100 + 1;

    // printf("%d", num);
    /*
        for (nguess = 1; guess != num; nguess++)
        {
            printf("\nEnter your number between 1 - 100: ");
            scanf("%d", &guess);
            if (guess > num)
            {
                printf("Lower Number Please!\n");
            }
            else if (guess < num)
            {
                printf("Higher Number Please!\n");
            }
            else
            {
                printf("Congractulations! You guessd in %d attempt(s).\n", nguess);
            }
        }

    */

    do
    {
        printf("Enter your number between 1 - 100: ");
        scanf("%d", &guess);

        if (guess > num)
        {
            printf("Lower Number Please!\n");
        }
        else if (guess < num)
        {
            printf("Higher Number Please!\n");
        }
        else
        {
            printf("Congractulations! You guessd in %d attempt(s).", nguess);
        }
        nguess++;

    } while (guess != num);

    return 0;
}