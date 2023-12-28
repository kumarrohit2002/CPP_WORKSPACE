#include<iostream>
#include<vector>
#include<list>
// #include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;

void add_edge(int s,int d){
	graph[s].push_back(d);
	graph[d].push_back(s);
}

void display(){
    cout<<"OutPut: "<<endl;
	for(int i=0;i< graph.size();i++){
		cout<<i<<"-> ";
		for(auto el:graph[i]){
			cout<<el<<", ";
		}
		cout<<endl;
		}
	}

int main(){
	cin>>v;
	graph.resize(v,list<int>());
	int e;
	cin>>e;
	while(e--){
		int s,d;
		cin>>s>>d;
		add_edge(s,d);
	}
	display();
}

//input.............
//7
//7
//0 2
//0 1
//1 5
//2 5
//2 3
//3 6
//6 4



