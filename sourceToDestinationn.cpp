#include<iostream>
using namespace std;
void stairs(int zeroth,int n){
    if(zeroth==n){
        return;
    }
    cout<<zeroth<<"th"<<" ";
    return stairs(zeroth+1,n);;
}
int main(){
    int zeroth;
    int nth;
    cout<<"the staire answer is :"<<endl;
    cin>>zeroth;
    cin>>nth;
    stairs(zeroth,nth);
    return 0;
}