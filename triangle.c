void main(){
	int row,col,space,row2;
	printf("ENter the number of rows to be printed: ");
	scanf("%i", &row2);
	printf("ENter the number of rows to be printeddsadf: ");
	for(row=row2;row>=1;row--){
		for(space=row2;space>row;space--){
			printf(" ");
		}
		for(col=1;col<=row;col++){
			printf("*");
		}
		printf("\n");
	}
}