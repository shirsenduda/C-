#include<iostream>
using namespace std;
void printNumber(int firstNumber,int lastNumber){
    if(firstNumber>lastNumber)return;
    else cout<<firstNumber<<endl;
    printNumber(firstNumber+1,lastNumber);
}
int main(){
    int num ;
    cout<<"Enter Number: ";
    cin>>num;
    printNumber(1,num);
    return 0;
}