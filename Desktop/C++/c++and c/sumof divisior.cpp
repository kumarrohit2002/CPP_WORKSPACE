#include<iostream>
using namespace std;
//void calculateDivisorSum(int &num){
//     for(int i=0;i<num;i++){
//         if(num%i==0){
//             sum=sum+i;
//         }
//     }
//}
int main(){
    int num;
    cin>>num;
    int sum=0;
//    calculateDivisorSum(num);
    for(int i=0;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}
