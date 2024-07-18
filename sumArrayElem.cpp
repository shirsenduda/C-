#include<iostream>
using namespace std;
int sumArrayElem(int array[],int index,int size){
    if(index==size-1){
        return array[index];
    }
    return array[index] + sumArrayElem(array,index+1,size);
}
int main(){
    int array[]={2,4,1,6,10};
    int index = 0;
    int size = 5;
    cout<<sumArrayElem(array,index,size)<<endl;
    return 0;
}