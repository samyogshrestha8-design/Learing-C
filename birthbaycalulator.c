#include<stdio.h>
int main(){
    int year = 0;
    printf("Enter the year you were born in :");
    scanf("%d",&year);
    int this_year=2026;
    int uryear = this_year - year;
    printf("UR age is : %d",uryear);
    return 0;
    
}