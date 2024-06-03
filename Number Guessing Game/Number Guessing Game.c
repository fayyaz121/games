#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(0)); // Seed for random number generator
    number = rand() % 100 + 1; // Generate random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 100:\n");

    do {
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number && attempts < 10); // Maximum 10 attempts allowed

    if (attempts == 10 && guess != number) {
        printf("Sorry, you have used all your attempts. The correct number was %d.\n", number);
    }

    return 0;
}
