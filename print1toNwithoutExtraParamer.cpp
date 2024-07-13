#include<iostream>
using namespace std;
void printNum(int number){
    if(number==0)return;
    else (printNum(number-1));
    cout<<number<<endl;
}
int main(){
    int n ;
    cout<<"Enter Number :";
    cin>>n;
    printNum(n);
}