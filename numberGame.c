#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int userChoice=0;
    int n;
    char q='a';
    int maxGuess=10;
    while(userChoice!=3)
    {
        printf("\nPlease press 1 to play a gamePress\n");
        printf("Please press 2 to change the max numberPress\n");
        printf("Please press 3 to quit\n");
        printf("Enter your Option:");
        scanf("%d",&userChoice);
        srand(time(0));
        int guess=(rand()%maxGuess)+1;
        if(userChoice==1)
        {
            choice1:printf("\nPlease enter the your guess:");
            scanf(" %c",&q);
            if(q=='q')
            {
                continue;
            }
            else{
                n=q-'0';
                if(n==guess)
                    printf("You won the game!\n");
                else if(n<guess){
                    printf("Guess is too low, try again!\n");
                    goto choice1;
                }
                else{
                    printf("Guess is too high, try again!\n");
                    goto choice1;
                }
            }
        }
        else if(userChoice==2)
        {
            choice2:printf("\nYou can set Maximum 100\nEnter the maxpress:");
            scanf("%d",&maxGuess);
            if(maxGuess>0 && maxGuess<=100)
                printf("Valid value.\n");
            else{
                printf("Invalid max Value, please enter value between 1-100\n");
                goto choice2;
            }
        }
    }
    printf("\nThank you!\n");
}