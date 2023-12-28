#include<iostream>
using namespace std;


int mysqrt(int x){
	int s=0;
	int e=x-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(e>=s){
		int square=mid*mid;
		if(square==x){
			ans=mid;
			break;
		}
		else if(square<x){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}

double threedigit(int x,int tsol){
	double factor=1;
	double ans=tsol;
	for(int i=0;i<3;i++){
		factor=factor/10;
		for(double j=ans;j*j<x;j=j+factor){
			ans=j;
		}
	}
	return ans;
}


int main(){
	int x=37;
	int tempsol=mysqrt(x);
	cout<<"right solution is: "<<threedigit(x,tempsol)<<endl;
}
