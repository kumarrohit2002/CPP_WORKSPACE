#include<iostream>
using namespace std;
class emp{
	public:
	char name[20];
	int id;
	int exp;
	int salary;
	void get();
	void put();
}e[5];

void emp::get(){
	cout<<"enter the name:";
	cin>>name;
	cout<<"enter the ID:";
	cin>>id;
	cout<<"enter the EXP:";
	cin>>exp;
	cout<<"enter the SALARY:";
	cin>>salary;
	
}

void emp::put(){
	cout<<"name: "<<name<<endl;
	cout<<"ID: "<<id<<endl;
	cout<<"EXP: "<<exp<<endl;
	cout<<"SALARY: "<<salary<<endl;
}

int main(){
//	class emp e[5];
	for(int i=0;i<5;i++){
		e[i].get();
		e[i].put();
	}
	return 0;
}
