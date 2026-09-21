#include<stdio.h>
void main()
{
    int  price , quantity , total;
    char item[40];
    printf("Enter the item name : ");
    scanf("%s",item);
    printf("Enter the price of item : ");
    scanf("%d",&price);
    printf("Enter the quantity of item : ");
    scanf("%d",&quantity);
    total = price * quantity;
    printf("the total %d", total);
    
}