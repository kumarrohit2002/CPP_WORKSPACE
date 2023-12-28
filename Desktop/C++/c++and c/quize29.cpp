#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int i,j,k,m;
	i=++arr[1];
	j=arr[1]++;
	k=arr[i++];
	m=arr[++j];
	printf("%d %d %d %d",i,j,k,m);
	return 0;
}
