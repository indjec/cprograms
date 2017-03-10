#include <stdio.h>
float product(float,int);
void main(){
    float xnhpc,pro;
    int numnhpc;
    printf("Enter a float: %f", xnhpc);
    scanf("%f", &xnhpc);
    printf("Enter an integer: %d", numnhpc);
    scanf("%d", &numnhpc);
    pro=product(xnhpc,numnhpc);
    printf("The product is: %f", pro);
}
float product(float a,int b){
    float z;
    z = a*b;
    return(z);
}