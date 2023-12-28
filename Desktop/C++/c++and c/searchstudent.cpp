#include<iostream>
using namespace std;
#include<cstring>

struct student{
	char name[20];
	int rno;
	char address[20];
	int pin;
	int regno;
	char dis[20];
	int marks;
}s[1];

void get(int i){
	cout<<"enter the "<<i+1<<" student details: "<<endl;
	cout<<"Name: ";
	cin>>s[i].name;
	cout<<"Roll no.: ";
	cin>>s[i].rno;
	cout<<"Address: ";
	cin>>s[i].address;
	cout<<"Pin code: ";
	cin>>s[i].pin;
	cout<<"Registation no: ";
	cin>>s[i].regno;
	cout<<"Distric: ";
	cin>>s[i].dis;
	cout<<"Marks: ";
	cin>>s[i].marks;
}
void put(int i){
	cout<<"Name: ";
	cout<<s[i].name<<endl;
	cout<<"Roll no.: ";
	cout<<s[i].rno<<endl;
	cout<<"Address: ";
	cout<<s[i].address<<endl;
	cout<<"Pin code: ";
	cout<<s[i].pin<<endl;
	cout<<"Registation no: ";
	cout<<s[i].regno<<endl;
	cout<<"Distric: ";
	cout<<s[i].dis<<endl;
	cout<<"Marks: ";
	cout<<s[i].marks<<endl;
}

int main(){
	for(int i=0;i<=1;i++){
		get(i);
	}
	char search[20];
	cout<<endl<<"Enter your Name for search: ";
	cin>>search;
	bool a=true;
	for(int i=0;i<=1;i++){
		if(strcmp(s[i].name, search) == 0){
			put(i);
		}
		else{
			a=false;
		}
	}
	if(!a){
		cout<<"not found in my list.";
	}
	return 0;
}
