#include<iostream>
using namespace std;
// 1 2 3
// 4 5 6
// 7 8 9

// 7 4 1
// 8 5 2
// 9 6 3
int main(){
	int m,n;
	cout<<"Enter the size of row&column in array: ";
	cin>>m;
	n=m;
	cout<<"Enter the element of array:"<<endl;
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"90 degree rotation array is:"<<endl;
	for(int i=0;i<m;i++){
		for(int j=n-1;j>=0;j--){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
