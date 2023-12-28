#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=n;i<m;i++){
		int c=0;
		for(int j=2;j<i;j++){
			if(i%j==0){
				c++;
			}
		}
		if(i==0 || i==1) continue;
		if(c==0) cout<<i<<" ";
	}
	return 0;
}
