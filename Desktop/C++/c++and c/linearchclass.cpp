#include<iostream>
using namespace std;
class search{
	public:
		int d;
};

void linearsearch(search* p,int size,int key){
	for(int i=0;i<size;i++){
		if((p+i)->d==key){
			cout<<"key is found";
			break;
		}
	}
}

int main(){
	search s[5];
	for(int i=0;i<5;i++){
		cin>>s[i].d;
	}
	search *p=s;
	linearsearch(p,5,3);
	return 0;
}
