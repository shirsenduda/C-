//Factorial
#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 0)
    return 1; //Base Case       
    int process = n * factorial(n-1);
}
int main(){
    int input;
    cout<<"Enter a Number :";
    cin>>input;
    cout<<factorial(input)<<endl;
}