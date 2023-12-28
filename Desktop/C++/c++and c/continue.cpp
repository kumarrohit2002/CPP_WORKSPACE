#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter the number: ";
    cin>>n;
    while(n>0){
        if(n%3==0){
            n--;
            continue;
        }
            cout<<n<<endl;
        n--;
    }
    return 0;
}
