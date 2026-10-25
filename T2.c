#include <stdio.h>
#include <cs50.h>

int main (void){
    int temperature;
    temperature = get_int ("Enter Temperature:");
    if (temperature <-15)
    {
        printf("Cold\n");
    }
    else if (temperature<=24)
    {
        printf ("Mild\n");
    }
    else if (temperature <=34)
    {
        printf ("Warm\n");
    }
    else {
        printf ("Hot\n");
    }
}
