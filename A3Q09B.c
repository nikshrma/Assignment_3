//checking a number for prime

#include<stdio.h>

int main(){
    int num,i;
    //input
    printf("Enter a number.\n");
    scanf("%d" , &num);
    //loop
    /*Initialising i from 2 is important as all numbers are divisible by 1*/
    for(i = 2  ; i<num ; i++){
        if(num%i==0){
            printf("Not prime as number is divisble by %d\n" , i);
            break;
        }
    }
    /*after the loop runs for the last time, 
    i gets updated but is no longer smaller than num so the loop doesn't run again
    if i can reach num without the loop being broken then that means num is prime*/
    if(i==num){
        printf("\nNumber is prime.");
    }
    return 0;
}
//alternate approach with while loop is possible using similar logic, DIY
