//finding hcf/gcd of 2 numbers
#include <stdio.h>

int main() {
    int a , b , hcf , num;

    printf("Enter two integers: ");
    scanf("%d%d" , &a , &b );

    num = (a < b) ? a : b;
    for (int i = 1; i <=num; ++i) {
        //Checks if i is factor of both integers
        if (a%i == 0 && b%i == 0) {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d\n", a , b , hcf);

    return 0;
}