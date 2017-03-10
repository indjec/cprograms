#include <stdio.h>
int add(int);
float average(int);
int totalsum=0;
float avg=0;
void main(){
    int row,num1,num2,sum;
    for(row=1;row<=2;row++){
        printf("Enter the numbers: ");
        scanf("%i", &num1);
        add(num1);
        average(num1);
        }
    
        printf("The sum is: %i\n", totalsum);
        printf("The average is: %f", avg);
}
int add(int num1){
    totalsum=totalsum+num1;
    return (totalsum);
}
float average(int num1){
    avg=(avg+num1)/2;
    return(avg);
}
// int add(int,int,int,int,int);
// float average(int,int,int,int,int);
// void main(){
//     int a,b,c,d,e,sum;
//     float avg;
//     printf("Enter 5 numbers: ");
//     scanf("%i%i%i%i%i", &a,&b,&c,&d,&e);
//     sum=add(a,b,c,d,e);
//     printf("The sum is: %i\n", sum);
    
//     avg=average(a,b,c,d,e);
//     printf("The avegare is: %f", avg);
// }
// int add(int a,int b,int c,int d,int e){
//     int x;
//     x=a+b+c+d+e;
//     return (x);
// }
// float average(int a,int b,int c,int d,int e){
//     float y;
//     y=(a+b+c+d+e)/5;
//     return (y);
// }


    