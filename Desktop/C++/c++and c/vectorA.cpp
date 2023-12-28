 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
 	vector<int> v;
 	cout<<"capacity: "<<v.capacity()<<endl;
 	cout<<"size: "<<v.size()<<endl;
 	v.push_back(1);
 	cout<<"capacity: "<<v.capacity()<<endl;
 	cout<<"size: "<<v.size()<<endl;
 	v.push_back(2);
 	cout<<"capasity: "<<v.capacity()<<endl;
 	cout<<"size: "<<v.size()<<endl;
 	v.push_back(3);
 	cout<<"capacity: "<<v.capacity()<<endl;
 	cout<<"size: "<<v.size()<<endl;
 	v.push_back(4);
 	cout<<"capacity: "<<v.capacity()<<endl;
 	cout<<"size: "<<v.size()<<endl;
 	v.push_back(5);
 	cout<<"capacity: "<<v.capacity()<<endl;
 	cout<<"size: "<<v.size()<<endl;
 	cout<<"Elment at 2nd index is :"<<v.at(2)<<endl;
 	cout<<"front"<<v.front()<<endl;
 	cout<<"back: "<<v.back()<<endl;
 	cout<<"befor pop back elemant is: ";
 	for(int i=0;i<v.size();i++){
 		cout<<v.at(i)<<" ";
	 }
	 cout<<endl;
	 
 	v.pop_back();
 	cout<<"after pop back element is: ";
 	for(int i=0;i<v.size();i++){
 		cout<<v.at(i)<<" ";
	 }
	 cout<<endl;
	 
	 vector<int> a(5,1);
	 cout<<"vector<int> a(5,1); is called : ";
	 for(int i=0;i<a.size();i++){
 		cout<<a.at(i)<<" ";
	 }
	 cout<<endl;
	vector<int> last(a);  //copy all element of a..........................
	cout<<"vector<int> last(a); is copy a all element: ";
	for(int i=0;i<last.size();i++){
		cout<<last.at(i)<<" ";
	}
 	
 	return 0;
 }
