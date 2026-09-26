#include <stdio.h>
#include <ctype.h>

int main() {

    char questions[][100] = {
        {"1. What does printf() do in C?"},
        {"2. Which symbol is used to get the address of a variable?"},
        {"3. What is the first index of an array in C?"},
        {"4. Which function is commonly used to read a string safely from the user?"}
    };

    char options[][500] = {
        {"A) Takes input from user\nB) Prints output to the screen\nC) Creates a variable\nD) Stops the program\n"},
        
        {"A) *\nB) #\nC) &\nD) @\n"},
        
        {"A) 0\nB) 1\nC) -1\nD) 10\n"},
        
        {"A) printf()\nB) scanf()\nC) fgets()\nD) strlen()\n"}
    };
    
    char answer[]={'A','C','A','C'};
    int size = sizeof(questions)/sizeof(questions[0]);
    int score = 0;
    for(int i =0; i < size;i++){
        printf("\n%s",questions[i]);
        printf("\n%s",options[i]);
        char userinput='\0';
        printf("ANS:");
        scanf(" %c",&userinput);
        userinput = toupper(userinput);
        if(userinput == answer[i]){
            printf("correct\n");
            score ++;

        }
        else{
            printf("wrong\n");
        }

        

    }
    printf("You have got %d out of %d",score,size);

    return 0;
}