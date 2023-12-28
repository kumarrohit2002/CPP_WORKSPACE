#include<iostream>
#include<string>
using namespace std;

class lpu{
	public:
		char name[20];
		char course[20];
		static int registation_no;
		void get(int i);
		void put(int i);
};

int lpu::registation_no=100;

void lpu::get(int i){
	cin>>name>>course;
}

void lpu::put(int i){
	cout<<"student name: "<<name<<endl;
	cout<<"student course: "<<course<<endl;
	cout<<"student reg no.: "<<registation<<endl;
}



int main(){
	class lpu s[2];
	for(int i=0;i<=2;i++){
		s[i].get(i);
		s[i].registation_no=i;
	}
	for(int i=0;i<=2;i++){
		s[i].put(i);
	}
	
	return 0;
}
