#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream obj;
    obj.open("file1.txt");
    obj<<"abcd";
}
