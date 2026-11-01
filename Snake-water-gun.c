 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(0));
    int player,computer = rand() % 3;
    int choice;
    

    while(1){ 
        printf("\n--Snake Water Gun--\n");
        printf("1.Start\n");
        printf("2.Exit\n");
        printf("Enter: ");
        scanf("%d",&choice);
        
        switch(choice){
            
            case 1:
            {
                printf("\n--Game Started--\n");
                printf("Snake: 0\nWater: 1\nGun  : 2\n");
                printf("Enter your choice: ");
                scanf("%d", &player);
                
                switch(player){
                    case 0:{

                        if(computer == 0){
                            printf("\n----Draw----\n");
                            printf("You and Computer both chose SNAKE...\n");
                            printf("\n");
                            break;
                        } 
                        else if(computer == 1){
                            printf("\n----You Won----\n");
                            printf("You chose SNAKE and Computer chose WATER\n");
                            printf("\n");
                            break;
                        } 
                        else if(computer == 2){
                            printf("\n----You Lost----\n");
                            printf("You chose SNAKE and Computer chose GUN\n");
                            printf("\n");
                            break;
                        } 


                        break;


                    }
                    case 1:{
                         if(computer == 0){
                             printf("\n----You Lost----\n");
                            printf("You chose WATER and Computer chose SNAKE\n");
                            printf("\n");
                            break;
                        } 
                        else if(computer == 1){
                            printf("\n----Draw----\n");
                            printf("You and Computer both chose WATER...\n");
                            printf("\n");
                            break;
                        } 
                        else if(computer == 2){
                            printf("\n----You Won----\n");
                            printf("You chose WATER and Computer chose GUN\n");
                           printf("\n");
                           break;
                        } 

                        break;

                    }
                    case 2:{
                         if(computer == 0){
                            printf("\n----You Won----\n");
                            printf("You chose GUN and Computer chose SNAKE\n"); 
                           printf("\n");
                            break;
                        } 
                        else if(computer == 1){
                             printf("\n----You Lost----\n");
                            printf("You chose GUN and Computer chose WATER\n");
                           printf("\n");
                            break;
                            
                        } 
                        else if(computer == 2){
                            printf("\n----Draw----\n");
                            printf("You and Computer both chose GUN...\n");
                           printf("\n");
                            break;
                           
                        } 

                        break;

                    }

                }
                break;
            }
            case 2:
            {
                return 0;
            }
            
        }
        }
        }