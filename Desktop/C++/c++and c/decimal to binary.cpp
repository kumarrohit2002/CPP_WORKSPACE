#include<stdio.h>
#include<math.h>
int main(){
	int a;
	scanf("%d",&a);
	int bin=0;
	int count=0;
	while(a!=0){
		int rem=a%2;
		bin=rem*pow(10,count)+bin;
		count++;
		a/=2;
	}
	printf("%d",bin);
	return 0;
}
