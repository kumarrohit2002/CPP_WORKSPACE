#include<iostream>
using namespace std;
void multi(int arr[][],int am,int an,brr[][],int bm,an){
	int ans[am][an];
	for(int i=0;i<an;i++){
		for(int j=0;j<bm;j++){
			for(int k=0;k<am;k++){
				ans[am][an]+=arr[i][j]+brr[j][i];
			}
		}
	}
}
int main(){
	int am;                       
	int an;
	cout<<"Enter the row: ";
	cin>>am;
	cout<<"Enter the column: ";
	cin>>an;
	
	int bm;
	int bn;
	cout<<"Enter the row: ";
	cin>>bm;
	cout<<"Enter the column: ";
	cin>>bn;
	
	int arr[am][an];
	cout<<"Enter the first array: ";
	for(int i=0;i<am;i++){
		for(int j=0;j<an;j++){
			cin>>arr[i][j];
		}
	}
	int ans[am][an];
	for(int i=0;i<an;i++){
		for(int j=0;j<bm;j++){
			for(int k=0;k<am;k++){
				ans[am][an]+=arr[i][j]+brr[j][i];
			}
		}
	}
	int brr[bm][bn];
	cout<<"Enter the second array: ";
	for(int i=0;i<bm;i++){
		for(int j=0;j<bn;j++){
			cin>>brr[i][j];
		}
	}
	cout<<"first array is: "<<endl;
	for(int i=0;i<am;i++){
		for(int j=0;j<an;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"second array is: "<<endl;
	for(int i=0;i<bm;i++){
		for(int j=0;j<bn;j++){
			cout<<brr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
