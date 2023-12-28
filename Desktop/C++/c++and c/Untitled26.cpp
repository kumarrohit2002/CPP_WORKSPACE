#include<stdio.h>
// AP 4,7,10,13.......................nth
int main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(int i=4;i<=(3*n)+1;i=i+3){
		printf("%d, ",i);
	}
	return 0;
}
