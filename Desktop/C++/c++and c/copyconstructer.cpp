#include<iostream>
using namespace std;

class marks{
	public:
		int s;
		int m;
		marks(int s1,int s2){
			s=s1;
			m=s2;
		}
		marks(marks &a){
            s=a.s;
            m=a.m; 
        }
		void print(){
			cout<<"marks1:"<<s<<endl;
			cout<<"marks2:"<<m<<endl;
		}
};
int main(){
	marks O(45,50);
	O.print();
	cout<<endl;
	marks O1(O);
	O1.print();
	return 0;
}
