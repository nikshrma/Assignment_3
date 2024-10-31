//checking whether a number is Armstrong or not

#include<stdio.h>

int main(){
    int num, original, digits=0, dig ,final=0;
    //input
    printf("Enter a number.\n");
    scanf("%d" , &num);
    //saving value of the input in original
    original=num;

    //counting total digits in input number
    while(num>0){
        num/=10;
        digits++;
    }

    //returning num its original value as its been altered in the above while loop
    num = original;

    //loop to measure individual digits raised to the power of the number of total digits
    while(num>0){
        dig=num%10; //stores individual digit
        int sum = 1; //initialising sum from 1 in every iteration of the loop
    for(int i = 1 ; i<=digits ; i++){
        sum *= dig; //stores individual digit raised to the power of the number of total digits
    }
    final += sum; //final output variable which stores each digit raised to said power
    num/=10;
  }

//output
    if(final==original){
        printf("Number is armstrong.\n");
    }
    else{
        printf("Number is not armstrong.\n");
    }
    return 0;
}
