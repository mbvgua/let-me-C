#include <stdio.h>

int main() {
    int guess;
    printf("Guess a randomn number between 1 and 50 :)\n");
    while (scanf("%d", &guess) != EOF) {
        if(guess == 42){
            printf("Congratulations! You got that right\n");
            break;
        }
        else if ( guess < 42) {
            printf("Too low... try again?\n");
        }
        else {
            printf("Too high... try again?\n");
        }
    }
}