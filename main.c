#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Welcome to ROCK, PAPER, SCISSORS Game\n");
    int stinp = 1;
    printf("Rules of the game:\n");
    printf("Rule 1: If you choose ROCK, you can defeat scissors and paper can defeat you!\n"
           "Rule 2: If you choose PAPER, you can defeat rock and scissors can defeat you!\n"
           "Rule 3: If you choose SCISSORS, you can defeat paper and rock can defeat you!\n");
    
    int gamecount = 0;
    while (stinp != 0) {
        if(gamecount==0){
            printf("\nDo you want to start? (Enter 1 to start & 0 to exit): ");
        }
        else{
            printf("\nDo you want to play again? (Enter 1 to start & 0 to exit): ");
        }
        gamecount++;
        scanf("%d", &stinp);

        if (stinp == 1) {
            int userinp;
            printf("Rock, Paper, Scissors? (Enter 1 for Rock, 2 for Paper, 3 for scissors)\n: ");
            scanf("%d", &userinp);

            // Generating Computer's input
            srand(time(NULL));
            int compinp = rand() % 3;
            compinp += 1;

            if (userinp == compinp) {
                printf("Key- 1 = Rock, 2 = Paper, 3 = Scissors\n");
                printf("Your input was %d\nComputer's input was %d\nSo it's a tie!", userinp, compinp);
            } 
            else if ((userinp == 1 && compinp == 3) || (userinp == 2 && compinp == 1) || (userinp == 3 && compinp == 2)) {
                printf("Key- 1 = Rock, 2 = Paper, 3 = Scissors\n");
                printf("Your input was %d\nComputer's input was %d\nCongratulations! You win!", userinp, compinp);
            } 
            else {
                printf("Key- 1 = Rock, 2 = Paper, 3 = Scissors\n");
                printf("Your input was %d\nComputer's input was %d\nOops! You lose!", userinp, compinp);
            }
        }
    }

    return 0;
}
