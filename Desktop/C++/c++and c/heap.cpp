#include<iostream>
using namespace std;


class Heap{
	int arr[100];
	int size;
	public:
		Heap(){
			arr[0]=-1;
			size=0;
		}
		
		void insert(int val){
			size++;
			int index=size;
			arr[index]=val;
			while(index > 1 && arr[index/2]  < arr[index]){	//max heap..........
				swap(arr[index/2],arr[index]);
				index=index/2;
			}
		}
		
		void print(){
			for(int i=0;i<size+1;i++){
				cout<<arr[i]<<" ";
			}cout<<endl;
		}
		
		void deleteFromHeap(){
			if(size==0){
				cout<<"nothing to delete"<<endl;
				return;
			}
			arr[1]=arr[size];
			int i=1;
			while(i<size){
				int leftindex=2*i;
				int rightindex=2*i+1;
				
				if(leftindex < size && arr[i] < arr[leftindex]){
					swap(arr[i],arr[leftindex]);
					i=leftindex;
				}
				else if(rightindex < size && arr[i] < arr[rightindex]){
					swap(arr[i],arr[rightindex]);
					i=rightindex;
				}
				else{
					return;
				}
			}
		}
};




int main(){
	Heap h;
	h.insert(10);
	h.insert(20);
	h.insert(30);
	h.insert(5);
	h.insert(25);
	h.deleteFromHeap();
	h.print();
	return 0;
}
