#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;

    
    srand(time(0));

    printf("====== Rock Paper Scissors Game ======\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &userChoice);

    
    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid Input! Please run the program again.\n");
        return 0;
    }


    computerChoice = (rand() % 3) + 1;

    
    printf("\nYou chose: ");
    if (userChoice == 1) printf("Rock");
    else if (userChoice == 2) printf("Paper");
    else printf("Scissors");

  
    printf("\nComputer chose: ");
    if (computerChoice == 1) printf("Rock");
    else if (computerChoice == 2) printf("Paper");
    else printf("Scissors");

    printf("\n\n");

    if (userChoice == computerChoice) {
        printf("Result: It's a DRAW!\n");
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2)) {
        printf("Result: You WIN! HURRAY \n");
    }
    else {
         printf("Result: Computer WINS! SAD\n");
    }

    return 0;
}

