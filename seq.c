#include <stdio.h>
int sum(int,int);
void main(){
    int num1=1,num2=1,add;
    printf("%i %i ", num1, num2);
    add=sum(num1,num2);
    printf("%i", add);
}
int sum(int x,int y){
    int z= x+y;
    return(z);
}