#include<iostream>
using namespace std;
class lpu{
	public:
	char name[20];
	int age;
	static int regno;
	void get(){
		cin>>name>>age;
	}
	void put(){
		regno++;
		cout<<name<<" "<<age<<" "<<regno<<endl;
	}
};

int lpu::regno=100;

int main(){
	lpu s[3];
	s[1].get();
	s[1].put();
	s[2].get();
	s[2].put();
	return 0;
}
