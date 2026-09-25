#include <stdio.h>

int main() {
    int scores[5] = {0};

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
    }
    return 0;
}