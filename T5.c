#include<stdio.h>
#include<cs50.h>
int main (void){
    int base;
    int exponent;
    int i;
    int result=1;
    base= get_int("Enter base: ");
    exponent= get_int("Enter exponent : ");
    if (base<1 || base>10 || exponent <0 || exponent>8)
    {
        printf("Invalid input\n");
    }
    else {
        for (i=1; i<=exponent; i++)
        {result = result * base;}
        printf ("Result : %d\n", result);
    }
}
