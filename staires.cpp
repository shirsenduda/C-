#include<iostream>
using namespace std;
int staires(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return staires(n-1)+staires(n-2);
}
int main(){
    int n = 2;
    cout<<"answer is :";
    cout<<staires(n);
    return 0;
}