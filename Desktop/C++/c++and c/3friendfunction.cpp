#include<iostream>
using namespace std;
class classA;
class classB;
class classC;
class classA{
	int a;
	public:
		void ipa(){
			a=10;
		}
		friend int add(classA,classB,classC);
}A;
class classB{
	int b;
	public:
		void ipb(){
			b=10;
		}
		friend int add(classA,classB,classC);
}B;
class classC{
	int c;
	public:
		void ipc(){
			c=10;
		}
		friend int add(classA,classB,classC);
}C;
int add(classA objA,classB objB,classC objC){
	int s=objA.a + objB.b + objC.c;
	return s;
}
int main(){
	A.ipa();
	B.ipb();
	C.ipc();
	cout<<"sum is "<<add(A,B,C);
	return 0;
}
