#include<iostream>
using namespace std;
class emp{
	public:
		int eid;  //ac
		char ename[20];
		int esalary;
		void getdata();
		void putdata();
//		void getdata(){
//			cin>>eid;
//			cin>>ename;
//			cin>>esalary;
//		}
//		void putdata(){
//			cout<<eid<<endl;
//			cout<<ename<<endl;
//			cout<<esalary;
//		}
};
void emp:: getdata(){
			cin>>eid;
			cin>>ename;
			cin>>esalary;
		}
void emp::putdata(){
			cout<<eid<<endl;
			cout<<ename<<endl;
			cout<<esalary;
		}
int main(){
	class emp e;
	cout<<"enter the data: ";
	e.getdata();
	cout<<"your data is :";
	e.putdata();
	return 0;
}
