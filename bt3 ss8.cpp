#include<stdio.h>
int main(){
	int n;
	printf("nhap kich thuoc cua 2 chiu");
	scanf("%d",&n);
	int matrix[n][n];
	
	for( int i=0; i<n ; i++){
	    for(int j=0 ; j<n ; j++){
	    	printf(" nhap matrix[%d][%d] =",i , j);
	    	scanf("%d",&matrix[i][j]);
	    	
		}
	}
	for( int i=0; i<n ; i++){
	    for(int j=0 ; j<n ; j++){
	    printf("%d \t",matrix[i][j]);
	}
	 printf("\n");
}
	return 0;
}