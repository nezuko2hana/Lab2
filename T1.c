#include <stdio.h>
#include <cs50.h>

int main (void){
    int price, quantity;
    price=get_int("Enter Price:");
    quantity = get_int("Enter Quantity: ");

    int total=price*quantity;
    int change= 500-total;
    float average = (float) total/ quantity;

    printf("Total Cost: %d\n", total);
    printf ("Change : %d\n", change);
    printf ("Average : %.2f\n", average);
}
