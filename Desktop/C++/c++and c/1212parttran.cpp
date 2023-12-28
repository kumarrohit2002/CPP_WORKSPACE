#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=m/2;k++){
		if(i%2!=0){
			for(int j=1;j<=2;j++){
				cout<<j;
			}
		}
		else{
			for(int j=2;j>=1;j--){
				cout<<j;
			}
		}
	}
		cout<<"\n";
	}
	return 0;
}
