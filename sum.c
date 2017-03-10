#include <stdio.h>
int sum(int);
int totalsum=0;
void main(){
    int num,add;
    for(num=1;num<=25;num++){
    printf("%i+", num);
    add=sum(num);
    }
    printf("=%i", add);
}
int sum(int x){
    totalsum=totalsum+x;
    return(totalsum);
}