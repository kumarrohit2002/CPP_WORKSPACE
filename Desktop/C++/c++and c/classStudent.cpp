#include<iostream>
using namespace std;
class student{
	private:
		int rno;
		int regno;
		char name[30];
		int age;
	public:
		void get();
		void put();
};
void student::get(){
	cin>>rno>>regno>>name>>age;
}
void student::put(){
	cout<<rno<<endl<<regno<<endl<<name<<endl<<age;
}
int main(){
	class student s;
	s.get();
	s.put();
	return 0;
}
