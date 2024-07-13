#include<iostream>
using namespace std;
void reverseNum(int n){
    if(n==0){
    return ;
    }
    reverseNum(n-1);
    cout<<n<<endl;
}
int main(){
    int input;
    cout<<"Enter a Number :";
    cin>>input;
    reverseNum(input);
    return 0;
}