#include<iostream>
using namespace std;
enum level{
	easy=5,normal,hard
}l;
int main(){
	l=easy;
	int choice;
	cout<<"enter your choice: ";
	cin>>choice;
	switch(choice){
		case easy: {
		cout<<"your level is easy";
			break;
		};
		case normal: {
		cout<<"your level is normal";
			break;
		};
		case hard:{
			 cout<<"your level is hard";
			break;
		};
		default:{ 
		cout<<"level is not Available";
			break;
		}
	}
}
