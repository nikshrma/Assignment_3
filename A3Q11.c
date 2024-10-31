#include<stdio.h>

int main(){
    int num;
    while(1){   //Initialising an infinite loop
        printf("Enter a number smaller than 100.\n");
        scanf("%d" , &num);
        if(num>100){
            printf("You went over 100!\n");
            printf("TERMINATED\n");
            break; //condition to terminate infinite loop when number goes above 100
        }
    }
    return 0;
}
