#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int>> graph;
int v;

void add_edge(int s,int d,bool bi_dir=true){
	graph[s].push_back(d);
	if(bi_dir){
		graph[d].push_back(s);
	}
}

void display(){
	for(int i=0;i<graph.size();i++){
		cout<<i<<"-> ";
		for(auto ele:graph[i]){
			cout<<ele<<", ";
		}
		cout<<endl;
	}
}

int main(){
	cin>>v;
	graph.resize(v,list<int> ());
	int e;
	cin>>e;
	while(e--){
		int s,d;
		cin>>s>>d;
		add_edge(s,d,false);
	}
	display();
	return 0;
}


//7
//7
//0 2
//0 1
//1 5
//2 5
//2 3
//3 6
//6 4
//output
//0-> 2, 1,
//1-> 5,
//2-> 5, 3,
//3-> 6,
//4->
//5->
//6-> 4,
