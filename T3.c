#include <stdio.h>
#include <cs50.h>

int main (void){
    int number;
    int i;
    number = get_int ("Enter number:");
    if (number<1 || number>20)
    {
        printf ("Invalid number\n");
    }
    else {
        for (i=1; i<=10; i++)
        {
            printf ("%i * %i= %i\n", number, i, number*i);
        }
    }
}
