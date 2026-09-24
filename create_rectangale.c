#include<stdio.h>

int main(){
    int rows = 0;
    int column = 0 ;
    char letter = '\0';
    printf("Enter the rows of  rectangale:");
    scanf(" %d",&rows);
    printf("Enter the columb of rectangale:");
    scanf("%d",&column);
    printf("The letter to use:");
    scanf(" %c",&letter);
    for(int i =0 ; i < rows; i+=1){
        for(int j= 0 ;j < column;j+=1){
            printf("%c",letter);
        }
        printf("\n");

    }

    
    
    return 0;
}
