#include <stdio.h>
void main(){
    int num,num2;
    printf("Enter a number to generate the table: ");
    scanf("%i", &num);
    for(num2=1;num2<=10;num2++){
         printf("%i * %i = %i\n", num, num2, num*num2);

    }
    
}