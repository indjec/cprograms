void main(){
    int num;
    int fact=1;
    printf("Enter a number: ");
    scanf("%i", &num);
    while(num>0){
        fact=fact*num;
        num--;
        }
    printf("factorial value= %i\n", fact);
    
    
}