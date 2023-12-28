 #include<stdio.h>
 //profit loss............
 int main() {
 	int p;
 	printf("Enter the real price:");
 	scanf("%d",&p);
 	int sp;
 	printf("Enter the selling price:");
 	scanf("%d",&sp);
 	int pro;
 	int loss;
 	if (p<sp){
 		pro=sp-p;
 		printf("profit is %d",pro);
	}
	 
	if (p>sp){
	 	loss=p-sp;
	 	printf("loss is %d",loss);
	}
//	else{
//		printf("no profit")
//	}
	return 0;
 }
