#include <stdio.h>
void main(){
    int num,fact;
    printf("Enter a number: ");
    scanf("%i", &num);
    fact = fun(num);
    printf("Factorial is:  %i\n", fact);
}
fun(int num){
    int y;
    if( num == 1){
        return (1);
    }
    else{
        y = num * fun(num-1);
    }
    return (y);
}