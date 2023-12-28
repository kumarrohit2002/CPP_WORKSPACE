#include<iostream>
#include<math.h>
using namespace std;
void votecheak(int age){
	if(age<18 && age>0) cout<<"No";
	else cout<<"Yes";
}
int main(){
	int age;
	cout<<"Enter the Age: ";
	cin>>age;
	votecheak(age);
	return 0;
}
