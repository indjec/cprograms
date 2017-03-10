void main(){
	int row,col,space,row2;
	printf("ENter the number of rows to be printed: ");
	scanf("%i", &row2);
	for(row=row2;row>=1;row--){
        space=row2;
        abc(space, row2, row, col); 
	}
}
abc(space, row2, row, col){
    
    printSpace(space, row2, row);
    printStars(col, row);
}
printSpace(space, row2, row){
if(space<row){
   printf("f");
   space--;
   printSpace(space, row2, row);
}
        
}
printStars(col, row){
    for(col=1;col<=row;col++){
			printf("*");
		}
		printf("\n");
}