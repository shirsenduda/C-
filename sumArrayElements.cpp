#include<iostream>
using namespace std;
int sumArray(int array[],int index,int size){
    if(index==size-1){
        return array[index];
    }
    return array[index]+sumArray(array,index+1,size);
}
int main(){
    int array[] = {2,3,5,20,1};
    int index = 0;
    int size = 5;
    cout<<sumArray(array,index,size);
    return 0;
}

