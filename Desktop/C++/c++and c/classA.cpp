#include<iostream>
using namespace std;
class fruit{
	public:
		string name;
		string color;
};
int main(){
	fruit f;
	f.name="apple";
	f.color="red";
	cout<<f.name<<" - "<<f.color<<endl;
	fruit *mango=new fruit;
	mango->name="mango";
	mango->color="yello";
	cout<<mango->name<<" - "<<mango->color<<endl;
	
	return 0;
}
