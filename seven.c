#include <stdio.h>
int fact(int);
void main(){
    int num=1; float result=0;float factdiv=0;
    for(num=1;num<=7;num++){
        factdiv=fact(num);
        if(num == 7){
            printf("%i/%i ! =", num, num);
        }else{
            printf("%i/%i ! + ", num, num);
        }
        result=result+num/factdiv;
    }
    printf("%f\n", result);
}
int fact(int x){
    int fact1=1;
    while(x>1){
        fact1=fact1*(x);
        x--;
    }
    return fact1;
}