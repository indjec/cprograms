#include <stdio.h>
void main(){
    int count,row,row2,space, y, left, right,sp, n=12;
    for(count=1;count<=12;count++){
        y=70;
        for(row=0;row<=12;row++){
            if(count>1){
                    row==n/2?printf("%c ", 32):row<6?printf("%c ", 65+row):printf("%c ", y--);
                }else{
                    row<7?printf("%c ", 65+row):printf("%c ", y--);
            }
            
        
        } 
printf("\n");
    }   
}
