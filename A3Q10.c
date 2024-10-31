#include<stdio.h>

int main(){
    int num , sum=0;
    while(1){  //initialising infinite loop
        printf("Enter a number.\n");
        scanf("%d" , &num);
        //condition for breaking
        if(num==-999){
            printf("The sum of the numbers entered thus far is %d.\n" , sum);
            printf("TERMINATED!");
            break;
        }
        //updating sum
        sum += num;
    /*Here the order of processes is very important
    we must check equality with -999 before updating sum as otherwise -999 will be added
    to the sum before breaking out of the loop which will give false results*/
    }
    return 0;
}
