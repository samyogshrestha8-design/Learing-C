#include <stdio.h>
#include <stdlib.h>

int withdraw (int amount , int total_balanc);
int deposite (int amount , int total_balance);

int main() {
    int balance = 100000;    
    char user_input = '\0';

    while (user_input != 'Q' && user_input != 'q') {


        printf("-------------------\n");
        printf("Welcome to ATM\n");
        printf("1. TAKE MONEY\n");
        printf("2. DEPOSIT MONEY\n");
        printf("Q. EXIT\n");
        printf("Enter ur choice: ");
        scanf(" %c", &user_input);
        if(user_input == '1'){
            int amount = 0;
            printf("Enter withdraw amount");
            scanf("%d",&amount);

            
             withdraw(amount,balance);

        }
        if (user_input == '2'){
            int amount2 = 0;
            printf("Enter deposite amount");
            scanf("%d",&amount2);
            deposite(amount2 , balance);

        }

    }

    printf("Thanks for using me!\n");

    return 0;
}
int withdraw (int amount , int total_balanc){
   
    printf("ur balance is:%d\n",total_balanc);
    int new_balance = total_balanc - amount ;
    printf("withdraw amount:%d \n", amount);
    printf("Ur balance now is :%d \n",new_balance);
    
    return new_balance;

}
int deposite (int amount , int total_balance){
    int newbalance = amount + total_balance;
    printf("ur old balance :%d \n",total_balance);
    printf("ur new balance: %d",newbalance);
    return newbalance;

}
