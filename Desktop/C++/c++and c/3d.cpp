#include<iostream>
using namespace std;
int main(){
	int o[2][3][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<2;k++){
				cin>>o[i][j][k];
			}
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<2;k++){
				cout<<o[i][j][k]<<" ";
			}
		}
	}
	return 0;
}
