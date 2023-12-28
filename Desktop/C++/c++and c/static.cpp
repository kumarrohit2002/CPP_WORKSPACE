//#include<stdio.h>
//void show(){
//	static int x=1;
//	x++;
//	printf("%d\n",x);
//}
//int main(){
//	show();
//	show();
//	show();
//	show();
//	show();
//	show();
//}

#include <iostream>
using namespace std;
class Demo {
   public :
   static int num;
   int display() {
      cout << "The value of the static member variable num is: " << num;
   }
};
int Demo::num = 100;
int main() {
   Demo obj;
   obj.display();
   return 0;
}
