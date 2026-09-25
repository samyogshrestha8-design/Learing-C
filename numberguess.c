#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand(time(NULL));
  
    int min = 1;
    int max = 10;
    int random_number = rand() % (max - min + 1) + min;
    int guess ;
    while (guess != random_number){
        printf("Enter ur guess(0-10):");
        scanf("%d",&guess); 
        if(guess > random_number){
            printf("UR GUESS IS HIGH\n");

        }
        else if (guess < random_number){
            printf("UR GUESS IS LOW\n");

        }
       
    }
    printf("YOU HAVE WON");
    return 0;

}