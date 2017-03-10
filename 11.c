#include <stdio.h>
void down(int,int);
int power(int);
void main(){
    int num=11,count,product1=1,space,row=4,spc=1;
    while(spc<=row){
        printf(" ");
        spc++;
    }
    printf("%i\n", 1);
    for(count=1;count<=4;count++){
        for(space=1;space<=row-1;space++){
            printf(" ");
        }
        row--;
        // if(product1 == 1){
        //     printf("%i\n", product1);
        // }
        product1=product1*num;
        down(product1,count);
        // printf("%i\n", product1);
    }
}
 void down(int x, int y){
     int expo;
    //  if(x == 11 && y == 0){
    //      x=1;
    //  }
    // printf("%i %i\n", x,y);
    expo=power(y);
    // printf("%i", expo);
    printf("%i ", x/expo);
    y--;
    if( y > 0){
    down(x%expo, y);
    }
    if(y == 0){
        printf("%i \n", 1);
    }

    
}

int power(int z){
    int raised,result=1;
    for(raised=1;raised<=z;raised++){
        result=result*10;
        
    }
    return(result);
}