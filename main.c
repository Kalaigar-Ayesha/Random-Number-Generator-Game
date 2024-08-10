#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses=0;
    int guesses_number;
   
        do{
    printf("Guess the Number:");
    scanf("%d",&guesses_number);
           if(guesses_number>randomNumber){
        printf("Please Enter the Lower Number.\n");
    }
           else if(guesses_number < randomNumber){
        printf("Please Enter the Higher Number.\n");
    }
           else{
        printf("Congratulations! You guesses_number the number!\n");
    }
           no_of_guesses++;
    }while(guesses_number!=randomNumber);
    
    printf("You guesses_number the number in %d guesses",no_of_guesses);
    return 0;
}
