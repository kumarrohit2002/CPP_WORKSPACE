#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a=10;
	cout<<a<<endl;
	cout<<hex<<a<<endl;
	cout<<oct<<a<<endl;
	cout<<dec<<a<<endl;
	cout<<setbase(8)<<a<<endl;
	cout<<setw(5)<<a<<endl;
	cout<<setw(5)<<setfill('*')<<a<<endl;
	float b=14.23;
	cout<<b<<endl;
	cout<<setprecision(3)<<b<<endl;
	cout<<setprecision(3)<<fixed<<b<<endl;
	
	char name[20];
	cin.getline(name,20);
	cout<<name<<endl;

	return 0;
}
