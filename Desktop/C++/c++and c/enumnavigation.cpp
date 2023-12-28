// You are using GCC
#include<iostream>
using namespace std;
class Navigator{
    public:
    enum{
        North=1,East=2,West=3,South=4
    }N;
};
int main(){
    Navigator n;
//    n.N=n.North;
    int choice;
    cin>>choice;
    switch(choice){
        case n.North:{
            cout<<"We are headed towards North.";
            break;
        }
        
        case n.South:{
            cout<<"We are headed towards South.";
            break;
        }
        
        case n.East:{
            cout<<"We are headed towards East.";
            break;
        }
        case n.West:{
            cout<<"We are headed towards West.";
            break;
        }
        
        default:{
            cout<<"Invalid Input";
        }
    }
    return 0;
}
