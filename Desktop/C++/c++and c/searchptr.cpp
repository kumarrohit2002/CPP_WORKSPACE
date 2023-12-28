#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the element to search"<<endl;
	cin>>n;
	int flag =0;
	int j;
	int A[]={0,5,10,15,50,35,25};
	int *p=A;
	
	for(int i=0;i<7;i++)
	{
		if(*(p+i)==n)
		{
			flag=1;
			j=i+1;
			break;
		}
	}
	
	if(flag==1)
	cout<<"Element at "<<j;
	else
	cout<<"Element not found";
}
