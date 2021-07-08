#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    int hr, min, sec;

    printf("Let's set clock time\n");
    printf("Input hour: ");
    scanf("%d", &hr);
    printf("Input minute: ");
    scanf("%d", &min);
    printf("Input seconds: ");
    scanf("%d", &sec);
    if(hr>23 || min > 59 || sec> 59){
        printf("Wrong Input! Please Set Correct time");
    }
    else{
        while(1){
            system("clear");

            printf("%d:%d:%d", hr, min, sec);

            fflush(stdout);
            sec++;
            if (sec>59){
                min++;
                sec=0;
            } 
            else if (min>59){
                hr++;
                min=0;
            }
            else if (hr>23){
                hr=0;
            }

            sleep(1);
        }
    }
    return 0;
}