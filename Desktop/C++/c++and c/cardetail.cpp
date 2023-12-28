#include<iostream>
using namespace std;

class car_detail{
	private:
		char manufacture;
		char modal_name[30];
		int engine_no;
		int year;
		char color[20];
	public:
		void get();
		void put();	
}car;

void car_detail::get(){
	cin>>manufaturae>>modal_name>>engine_no>>year>>color;
}

void car_detail::put(){
	cout<<"manufacture: "<<endl<<"car name: "<<modal_name<<endl<<"engin number: "<<engine_no<<endl
	<<"manufacture year: "<<year<<endl<<"color: "<<color;
}

int main(){
	car.get();
	car.put();
	return 0;
}
