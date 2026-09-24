#include<stdio.h>
#include<stdbool.h>
void hello (char name [] , int age );
bool verify (int age );
int main (){
    hello("Sam",34);
    bool a = verify(34);
    if(a==0){
        printf("ur under age");
    }
    else{
        printf("ur ready to work");
    }
    return 0 ;
}
void hello (char name [] , int age ){
    printf("Your name is %s \n",name);
    printf("Your age is %d \n",age);
}
bool verify (int age ){
    return age >= 20;
}