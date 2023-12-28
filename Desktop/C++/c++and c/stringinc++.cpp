#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1("rohit");
	string s2(" kmar");
	s2.insert(2,"u");
	string s3=s1+s2;
	cout<<s3<<endl;
	string s4=s3;
	s1.swap(s2);
	cout<<s1<<" "<<s2<<endl<<s4;
	int n=s1.find("ar");
	cout<<endl<<n;
	char ch=s1.at(3);
	cout<<endl<<ch;
	s1.erase(1,2);
	cout<<endl<<s1;
	return 0;
}
