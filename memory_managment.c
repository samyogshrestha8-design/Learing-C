#include<stdio.h>
#include<stdlib.h>
int main (){
    int n = 0;
    printf("Enter the number of grades");
    scanf("%d",&n);
    int* grades = malloc(n * sizeof(int));
    for(int i =0;i < n ; i++){
        printf("Enter grades: ");
        scanf("%d",&grades[i]);

    }
    for(int i =0; i < n ; i++){
        printf("grades: %d ",grades[i]);
       
        
    }
    int extra = 0;
    printf("Do u want to add more");
    scanf("%d",&extra);
    if (extra > 0){
        int new_total= extra + n;
        int* temp = realloc(grades,new_total * sizeof(int));
        if(temp== NULL){
            printf("Failed");
        }
        grades = temp;
          for(int i =n;i < new_total ; i++){
        printf("Enter grades: ");
        scanf("%d",&grades[i]);

    }
    for(int i =0; i < new_total; i++){
        printf("grades: %d ",grades[i]);
    }
  
}
  free(grades);
}