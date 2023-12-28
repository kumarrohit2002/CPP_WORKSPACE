#include<iostream>
#include<math.h>
using namespace std;        //5 4 (1 2 3 4 5) -> (5 1 2 3 4 5)
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(m>n){
        m=abs(n-m);
    }
    
    if(m!=0){
        for(int i=m;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
