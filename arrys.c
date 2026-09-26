#include <stdio.h>
#include<string.h>

int main() {
   /*int scores[5] = {0};

    for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++) {
        printf("Enter a score: ");
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++) {
        printf("%d \n", scores[i]);
    }
    // 2D arrys //
    char numpad [][3]={{'1','2','3'},
                       {'4','5','6'},
                       {'7','8','9'},
                       {'*','0','#'}
                         };
    for(int i =0;i < 4;i++){
        for(int j= 0;j <3;j++){
            printf("%c",numpad[i][j]);
        }
        printf("\n");
    }*/
    char fruits [][10]={"apple","banana","mango"};
    fruits [0][0]='A';
    fruits[1][0]='B';
    fruits[2][0]='M';
    for(int i = 0 ; i < 4;i++){
        printf("%s \n",fruits[i]);
    }
    char names[3] [25]={0};
    for(int i = 0; i<sizeof(names)/sizeof(names[0]);i++){
        printf("Enter names");
        fgets(names[i],sizeof(names[i]),stdin);
        names[i][strlen(names[i])-1]='\0';

    }
    for(int i = 0;i<3;i++){
        printf("%s ",names[i]);
    }


    
    return 0;
}