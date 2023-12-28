#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int b=n;
	int rev = 0;
	while(b>0)
	{
		int d = b%10;
		rev = rev*10+d;
		b=b/10;
	}
	int c=0;
	if(n==rev) {
		for(int i=1;i<=n;i++){
			if(n%i==0) c++;
		}
		if(c==2) printf("YES");
		else printf("NO");
	}
	else printf("NO");
	return 0;
}
