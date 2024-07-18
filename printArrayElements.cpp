#include<iostream>
using namespace std;
void arrayElements(int array[],int index, int length ){
    // base case
    if(index==length){
        return;
    }
    cout<<array[index]<<" "<<endl;
    return arrayElements( array ,index+1, length  );
}
int main(){
    int length = 5;
    int array[] = {1,2,4,6,7};
    int index = 0;
    arrayElements(array,index,length);
    return 0;
}