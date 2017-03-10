#include <stdio.h>
void main(){
    int space=3,row,number=1,num;
    for(row=1;row<=4;row++){
        while(space<=1){
            printf("*");
        
            number=1;
            while(num<=row){
                printf("%i ", number);
                number++;
            }
            space--;
        }
    }
}