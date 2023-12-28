#include<iostream>
#include<math.h>
using namespace std;
bool isodd(int num){
	if(num%2==0) return false;
	else return true;
}
int main(){
	for(int i=0;i<10;i++){
		if(isodd(i)) cout<<i<<"\n";
	}
	return 0;
}
