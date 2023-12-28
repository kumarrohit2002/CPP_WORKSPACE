#include<iostream>
using namespace std;
class sum{
	int n;
	public:
	sum(int n):n(n){
		
	}
	int operator+(sum s2){
		return n+s2.n;
	}
	int operator*(){
		return n*n;
	}
};

int main(){
	sum s1(5);
	sum s2(5);
	int n=s1+s2;
	cout<<n<<endl;
	int n1=*s1;
	cout<<n1;
	
	return 0;
}
