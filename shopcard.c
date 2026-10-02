#include<stdio.h>
#include<stdbool.h>
typedef struct 
{
    int price ;
    int quantity;
    char item [50];
}Item;

int main()

{
    Item phone = {200, 0, "Phone"};
    Item charger = {20, 0, "Charger"};
    Item battery = {5, 0, "Battery"};
    char user_choice ='\0';
    bool stillshoping = true ;
    int total_price  = 0;
    
    while (stillshoping){
        printf("Shoping items\n");
        printf("1)phone = 200\n");
        printf("2)charger = 20\n");
        printf("3)battery = 5\n");
        printf("4)END \n");
        printf("Enter the index of item you want to buy:");

        scanf(" %c",&user_choice);
        if(user_choice != '1' && user_choice != '2' && user_choice != '3' && user_choice != '4'){
            printf("ERROR 404 NO VALID CHOICE ");
            return ;
        }
        if(user_choice == '4'){
            stillshoping = false;
        }
        switch (user_choice)
        {
        case '1':
        printf("buying phone");
        printf("Enter the quantity of phone you want to buy:");
        scanf("%d",&phone.quantity);
        total_price += phone.price * phone.quantity;
        break;
        case '2':
        printf("buying charger");
        printf("Enter the quantity of charger you want to buy:");
        scanf("%d",&charger.quantity);
        total_price += charger.price * charger.quantity;
        break;
        case '3':
        printf("buying battery");
        printf("Enter the quantity of battery you want to buy:");
        scanf("%d",&battery.quantity);
        total_price += battery.price * battery.quantity;
        break;
        default:
            break;
        }
        


    }
    printf("Total price is %d",total_price);
    
    return 0;
}