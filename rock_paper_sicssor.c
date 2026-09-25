#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
void wincheck(int userinput,int computer);
int main (){
int userinput = 0;
int computer_input =0;
while (true)
{

    printf("________________\n");
    printf("pick 1,2 and 3.4 to end ");
    printf("1.Rock\n");
    printf("2.paper\n");
    printf("3.scissor\n");
    printf("4.QUIT\n");
    printf("________________\n");
    printf("Enter:");
    scanf("%d",&userinput);
    if(userinput == 4 ){
        break;
    }
    computer_input =  (rand()% 3)+1;
    
wincheck(userinput , computer_input);
printf("computer input was %d\n",computer_input);
}

return 0;
}
void wincheck(int userinput,int computer){
if(userinput == computer){
    printf("its a tie");
}
else if ((userinput == 1 && computer == 3)||(userinput ==2 && computer ==1)||(userinput == 3 && computer == 2))
{
    printf("you have won\n");
}
else{
    printf("you have lost\n");
}

}
