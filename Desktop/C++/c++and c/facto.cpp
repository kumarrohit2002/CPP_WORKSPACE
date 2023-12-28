#include<iostream>
using namespace std;
class fac_class{
	public:
		int n;
		int fact(int n){
			if(n>=1){
				return n*fact(n-1);
			}
			else{
				return 1;
			}
		}
}f;
int main(){
	cin>>f.n;
	cout<<"factorial is :"<<f. fact(f.n);
}
