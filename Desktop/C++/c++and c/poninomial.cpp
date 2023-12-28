//#include<iostream>
//#include<math.h>
//using namespace std;
//
//
//void print(int arr[],int brr[],int n,int m){
//	int j=n;
//	for(int i=0;i<=n;i++){
//		if(i==n){
//			cout<<arr[i];
//		}
//		else{
//		cout<<arr[i]<<"x^"<<j;
//		if(arr[i+1] >= 0 && i!=n) cout<<"+";
//		j--;
//	}
//}
//	cout<<endl;
//	
//	int k=m;
//	for(int i=0;i<=n;i++){
//		if(i==m){
//			cout<<arr[i];
//		}
//		else{
//		cout<<brr[i]<<"x^"<<k;
//		if(brr[i+1] >= 0 && i!=m) cout<<"+";
//		k--;
//	}
//}
//	cout<<endl;
//}
//
//
//void printp(int arr[],int brr[],int n,int m){
//	int j=n;
//	int k=m;
//	int ma=max(m,n);
//	int data;
//	for(int i=0;i<ma;i++){
//		if(j==i && k==i){
//			data=arr[i]+brr[i];
//			cout<<data<<"x^";
//		}
//		
//	}
//}
//
//void sumpo(int arr[],int brr[],int n,int m,int x){
//	int sum1=0;
//	int j=n;
//	for(int i=0;i<=n;i++){
//		sum1=sum1+(arr[i]*pow(x,j));
//		
//		j--;
//	}
//	int sum2=0;
//	int k=m;
//	for(int i=0;i<=m;i++){
//		sum2=sum2+(brr[i]*pow(x,k));
////		cout<<" 2 in sum "<<sum<<endl;
//		k--;
//	}
//	cout<<"sum: "<<sum1<<endl;
//	cout<<"diff: "<<sum2<<endl;
//}
//
//int main(){
//	int n;
//	cout<<"Enter n: ";
//	cin>>n;
//	int arr[n+1];
//	for(int i=0;i<n+1;i++){
//		cin>>arr[i];
//	}
//	int m;
//	cout<<"Enter m: ";
//	cin>>m;
//	int brr[m+1];
//	for(int i=0;i<m+1;i++){
//		cin>>brr[i];
//	}
//	int x;
//	cout<<"Enter x: ";
//	cin>>x;
//	print(arr,brr,n,m);
//	sumpo(arr,brr,n,m,x);
//	return 0;
//}









#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr1[n+1];
	for(int i=0;i<=n;i++){
		cin>>arr1[i];
	}
	int m;
	cin>>m;
	int arr2[m+1];
	for(int i=0;i<=m;i++){
		cin>>arr2[i];
	}
	int k=n;
	if(n > m){
		int ans[n];
		int i=n;
		while(0 <= n){
			if(0 <= m){
				ans[i]=arr1[n--]+arr2[m--];
				cout<<ans[i]<<" ";
				i--;
			}
			else{
				ans[i]=arr1[n--];
				i--;
			}
		}
		cout<<endl;
		for(int i=0;i<=k;i++){
			cout<<ans[i]<<" ";
		}
	}
	return 0;
}
