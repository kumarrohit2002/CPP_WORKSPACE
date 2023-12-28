#include<iostream>
using namespace std;
class emp{
	public:
	char ename[20];
	int exp;
	int age;
	char marr[5];
	public:
	void get();
	void put();
}e;

inline void emp::get(){
	cout<<"Enter your name: ";
	cin>>ename;
	cout<<"Enter your Exprinace: ";
	cin>>exp;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Enter your marrage status (yes or No): ";
	cin>>marr;
}

inline void emp::put(){
	cout<<"Name: "<<ename<<endl;
	cout<<"exprence: "<<exp<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Marrage status: "<<marr<<endl;
}


int main(){
	e.get();
	cout<<endl<<"your detail:"<<endl;
	e.put();
	if(e.exp>5){
		cout<<"your are eligible for job!!!";
	}
	else cout<<"sorry u r not eligible for job!!!";
	
	return 0;
}
