#include <stdio.h>
//  IF  ELSE.............. 
int main(){
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	if (x%2==0){
		printf("even number");
	}
	if (x%2!=0) {
		printf("odd number");
	}
	
	return 0;
}
