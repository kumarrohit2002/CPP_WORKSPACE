#include <iostream>
using namespace std;
class A
{
	int x;
	public:
		void get(int x)
		{
			this->x=x;
		}
		void put()
		{
			cout<<x;
		}
};

int main()
{
	A ob;
	ob.get(10);+
	ob.put();
	
	return 0;
}
