//# PSC-AAT-Project
//Guessing Game with number of attempts

#include <stdio.h>

int main() {

    int secretNumber = 7;   // You can choose any number
    int guess;
    int attempts = 3;       // Total chances

    printf("Guessing Game!\n");
    printf("I am thinking of a number between 1 and 10.\n");
    printf("You have %d attempts.\n\n", attempts);

    for(int i = 1; i <= attempts; i++) {
        printf("Attempt %d - Enter your guess: ", i);
        scanf("%d", &guess);

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the correct number!\n");
            return 0; // End the game
        } 
        else if (guess < secretNumber) {
            printf("Too low! Try again.\n\n");
        } 
        else {
            printf("Too high! Try again.\n\n");
        }
    }

    // If user fails all attempts
    printf("Sorry! You used all attempts. The correct number was %d.\n", secretNumber);

    return 0;
}

