#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(0));
    int player, computer;
    int choice;

    while(1) { 
        printf("\n-- Snake Water Gun --\n");
        printf("1. Start\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        
        switch(choice) {
            case 1: {
                computer = rand() % 3;
                
                printf("\n-- Game Started --\n");
                printf("Snake: 0\nWater: 1\nGun  : 2\n");
                printf("Enter your choice: ");
                scanf("%d", &player);
                
                if (player < 0 || player > 2) {
                    printf("\n---- Invalid Choice! Please choose 0, 1, or 2. ----\n\n");
                    break;
                }
                
                char *names[] = {"SNAKE", "WATER", "GUN"};
                printf("You chose %s and Computer chose %s\n", names[player], names[computer]);
                
                switch(player) {
                    case 0: {
                        if (computer == 0) {
                            printf("\n---- Draw ----\n\n");
                        } 
                        else if (computer == 1) {
                            printf("\n---- You Won ----\n\n");
                        } 
                        else if (computer == 2) {
                            printf("\n---- You Lost ----\n\n");
                        }
                        break;
                    }
                    case 1: {
                        if (computer == 0) {
                            printf("\n---- You Lost ----\n\n");
                        } 
                        else if (computer == 1) {
                            printf("\n---- Draw ----\n\n");
                        } 
                        else if (computer == 2) {
                            printf("\n---- You Won ----\n\n");
                        } 
                        break;
                    }
                    case 2: {
                        if (computer == 0) {
                            printf("\n---- You Won ----\n\n");
                        } 
                        else if (computer == 1) {
                            printf("\n---- You Lost ----\n\n");
                        } 
                        else if (computer == 2) {
                            printf("\n---- Draw ----\n\n");
                        } 
                        break;
                    }
                }
                break;
            }
            case 2: {
                printf("Exiting game. Thanks for playing!\n");
                return 0;
            }
            default: {
                printf("\n---- Invalid Menu Choice. Please enter 1 or 2. ----\n\n");
                break;
            }
        }
    }
    return 0;
}