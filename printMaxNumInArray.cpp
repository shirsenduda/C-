#include<iostream>
using namespace std;
int arrayMaxElements(int array[],int index,int size){
    // Base Case
    if(index == size-1){
        return array[index];
    }
    return max(array[index], arrayMaxElements(array,index+1,size));
}
int main(){
    int array[] = {3,10,1,2,5};
    int index = 0;
    int size = 5;
    cout<<arrayMaxElements(array,index,size);
    return 0;
}