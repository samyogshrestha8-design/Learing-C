#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<windows.h>
int main (){
    time_t rawtime = 0;
    struct tm *pTime = NULL;
    bool isruninng= true;
    while(isruninng){
        time(&rawtime);
        pTime = localtime(&rawtime);

        printf("\r%02d:%02d:%02d ",
               pTime->tm_hour,
               pTime->tm_min,
               pTime->tm_sec);

        fflush(stdout);
        Sleep(1000);
        
    }
    return 0;

}