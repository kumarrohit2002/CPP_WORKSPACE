//#include<iostream>
//using namespace std;
//class circle{
//	public:
//		int radius;
//		void get(){
//			cin>>radius;
//		}
//		void area(){
//			cout<<3.1415*radius*radius;
//		}
//};
//int main(){
//	class circle c;
//	c.get();
//	c.area();
//	return 0;
//}
#include<iostream>
using namespace std;
class circle{
	private:
		int radius;
	public:
		void get();
		void area();
		
};
void circle::get(){
			cin>>radius;
		}
void circle::area(){
			cout<<3.1415*radius*radius;
		}
int main(){
	class circle c;
	c.get();
	c.area();
	return 0;
}
