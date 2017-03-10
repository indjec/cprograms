#include <stdio.h>
void main(){
      int row,space,x=3;
        for(row=1;row<=10;row++){
            // if(row == 1){
            //     printf("***");
            // }
            printf("%i ", row);
            if(row == 1 || row == 3 || row == 6 ){
                printf("\n");
                // if(row == 1){
                //     printf("**");
                // }
                // if(row == 3){
                //     printf("*");
                // }
                for(space=1;space<=x;space++){
                    printf("*");
                    x-=1;
                }
                
            }
        }
}                               
// row==1?printf("***"):row == 1 || row == 3 || row == 6?printf("\n");