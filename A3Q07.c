#include <stdio.h>

int main() {
    //declaration
    int days;
   float fine = 0;
   printf("Enter the number of days the book is late.\n");
    scanf("%d" , &days);
    //calculating fine
    /*here its important to calculate fine accurately keeping in mind the fine of the previous bracket*/
    if(days<=5){
        fine = days*0.5;
        }
    else if(days>5 && days<=10){
        fine = 5*0.5 + (days-5)*1;
    }
    else if(days>10 && days<=30){
        fine = 5*0.5 + 5*1 + (days-10)*5;
    }
    else{
        fine = 5*0.5 + 5*1 + 20*5 + (days-30)*10;
    }
    //output
    printf("The fine is ₹%f\n", fine);
    if(days>30)printf("Your membership has been cancelled.");
    return 0;
}
