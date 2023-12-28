#include<iostream>
using namespace std;

class banks{
	public:
		string name;
		string dob;
		int acc;
		int baln;
		banks(string n,string d,int s1=123,int s2=30000){
			name=n;
			dob=d;
			acc=s1;
			baln=s2;
		}
//		marks(marks &a){
//            s=a.s;
//            m=a.m; 
//        }
		void print(){
			cout<<"name: "<<name<<endl;
			cout<<"dob:  "<<dob<<endl;
			cout<<"account No :"<<acc<<endl;
			cout<<"Blance :"<<baln<<endl;
		}
};
int main(){
	banks O("rohit","18/10/2002");
	O.print();
	cout<<endl;
//	marks O1(O);
//	O1.print();
	return 0;
}
