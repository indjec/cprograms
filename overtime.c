#include <stdio.h>
void main(){
    int overtime,hours,payment;
    int count=1;
    while(count<=10){
        printf("Enter the total hours of work: ");
        scanf("%i", &hours);
        overtime=hours-40;
        payment=overtime*12;     
        printf("Total overtime payment received Rs: %i\n", payment);
        count++;
        }
     
}

