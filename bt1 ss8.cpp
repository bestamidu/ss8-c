#include<stdio.h>
int main(){
	
	int a[6]={52,6,3,7,9,12,};
	
	for (int i=5 ; i<sizeof(a)/sizeof(int) ; i--){
		
	printf("index %d = %d\n",i ,a[i]);}
	
	return 0;
}