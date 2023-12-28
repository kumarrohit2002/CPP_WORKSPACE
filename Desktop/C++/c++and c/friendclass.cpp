#include<iostream>
using namespace std;
class xyz{
	int x,y;
	public:
//		void get(){
//			cin>>x>>y;
//		}
		friend class abc;
};
class abc{
	public:
		void get(xyz &obj){
			cin>>obj.x>>obj.y;
			
		}
		void square(xyz obj){
			cout<<obj.x*obj.x<<endl;
		}
		void cube(xyz obj){
			cout<<obj.y*obj.y*obj.y;
			
		}
};
int main(){
	xyz obj1;
	abc obj2;
	obj2.get(obj1);
	obj2.square(obj1);
	obj2.cube(obj1);
	
}
