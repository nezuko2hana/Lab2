#include<stdio.h>
#include<cs50.h>
int main (void){
    int n;
    int i;
    int amount;
    int total=0;
    float average;
 n=get_int ("Enter number of days: ");
 if (n<1 || n>10){
    printf ( "Invalid input\n");
  }
 else {
    for (i=1; i<=n; i++){
    amount = get_int ("Enter amount: ");
    if (amount <0 || amount > 1000) {
        printf ("Invalid input \n");
        return 0;
    }
    total=total + amount;}
    average = (float)total/n;
    printf("Total savings:%d\n", total);
    printf ("Average daily savings : %.2f\n", average);
  }
}
