#include <stdio.h>
void main(){
    int count,row,x=71,y=0,z=70,space,i;
    for(count=1;count<=7;count++){
        for(row=65;row<=x;row++) {     //for printing ABCDEFG
            printf("%c ", row);
        }
            if(count==2){
                z=70;
            }
            i=1;
            while(i<=2){
                for(space=1;space<y;space++){
                    printf(" ");
                }
            i++;
            }

                // for(space=1;space<y;space++){
                //     printf(" ");
                // }
                for(row=z;row>=65;row--){
                    printf("%c ", row);
                }
        
        printf("\n");
        x--;
        z--;
        y=y+2;
       
        
     }
}