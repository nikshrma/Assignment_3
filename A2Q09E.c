//finding range by finding the largest and smallest numbers
#include<stdio.h>

int main(){
    int n, small, big, flag=0, num;
    printf("How many numbers do you want to enter?\n");
    scanf("%d" , &n);

    while(n>0){
        printf("Enter a number\n");
        scanf("%d" , &num );
        //this if block is entered only once to set big and small equal to the first number
        if(flag==0){
            big = small = num;
            flag = 1;//flag is set to 1 so that this if block isn't entered again during the execution
        }
        //changes the value of big and small accordingly
        else{
            if(num>big){
                big = num;
            }
            else if(small>num){
                small = num;
            }
        }
        n--;
    }
    //output
    printf("The largest number is %d.\n" , big);
    printf("The smallest number is %d.\n" , small);
    printf("The range is %d.\n" , big - small);
    return 0;
}