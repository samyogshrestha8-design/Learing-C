#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct
{
    char name [50];
    int age;
    float gpa;
    bool isfulltime;


}students;
typedef struct 
{
    char name [50];
    int mobel;
    int price;
}car;
void printcar(car *c, int size);
void printstruct(students *s);

int main(){
    students st1 = {"sam",17,3.6,0};
    printstruct(&st1);
    car cars []={{"maruti",2022,1000},
                {"honda",2026,100000},

    };
    int size_car = sizeof(cars)/sizeof(cars[0]);
    printf("%d",size_car);
    printcar(cars,size_car);


}
void printstruct(students *s){
    printf("%s %d %.2f %d \n",s->name , s->age,s->gpa,s->isfulltime);

}
void printcar(car *c, int size){
    for(int j = 0; j < size; j++){
        printf("%s %d %d\n",
               c[j].name,
               c[j].mobel,
               c[j].price);
    }
}