#include<iostream>
using namespace std;
int main(){
	char s[]="rohit";
	int i=0;
	while(s[i]!='\0'){
		if(s[i]<=65 && s[i]>=97);
		else s[i]=s[i]-32;
		i++;
	}
	cout<<s;
}
