#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter the n and m: "<<endl;
	cin>>n>>m;
	int arr[n][m];
	cout<<"Enter the elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
	}	
	int max=arr[0][0];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]>max)
			max=arr[i][j];
		}
	}
	
	cout<<"Max is: "<<max;
	return 0;
}
