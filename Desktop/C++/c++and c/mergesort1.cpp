#include<iostream>
using namespace std;


void merge(int arr[],int f,int mid,int l){
	int an=mid-f+1;
	int bn=l-mid;
	int a[an];
	int b[bn];
	for(int i=0;i<an;i++){
		a[i]=arr[f+i];
	}
	for(int j=0;j<bn;j++){
		b[j]=arr[mid+1+j];
	}
	int i=0;
	int j=0;
	int k=f;
	while(i<an && j<bn){
		if(a[i]< b[j]){
			arr[k++]=a[i++];
		}
		else{
			arr[k++]=b[j++];
		}
	}
	while(i<an){
		arr[k++]=a[i++];
	}
	while(j<bn){
		arr[k++]=b[j++];
	}
	return;
}

void mergesort(int arr[],int f,int l){
	if(f>=l) return;
	int mid=(f+l)/2;
	mergesort(arr,f,mid);
	mergesort(arr,mid+1,l);
	merge(arr,f,mid,l);
	return;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
