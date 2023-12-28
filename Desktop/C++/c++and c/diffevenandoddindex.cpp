#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v(6);
	int evenindex=0;
	int oddindex=0;
	for(int i=0;i<6;i++){
		cin>>v[i];
	}
	for(int i=0;i<6;i++){
		if(i%2!=0){
			evenindex=evenindex+v[i];
		}
		else oddindex=oddindex+v[i];
	}
	cout<<"diffrence b/w even and odd index element is "<<evenindex-oddindex;
	return 0;
}
