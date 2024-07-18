#include<iostream>
using namespace std;
bool sort(int *array,int indexFirst,int indexSecond,int length){
    //base case 
    if(length == 0 || length == 1){
        return true;
    }else if(array[indexFirst]>array[indexSecond]){ 
        return false;
    }else{
        bool remaining = sort( array , indexFirst+1, indexSecond+1, length-1);
        return remaining;
    }
}
int main(){
    int length = 5;
    int array[] = {1,2,44,6,7};
    int indexFirst = 0;
    int indexSecond = 1;
    bool ans = sort(array,indexFirst,indexSecond,length);
    if(ans){
        cout<<endl<<endl<<endl;
        cout<<"The answer is sorted"<<endl;
        cout<<endl<<endl<<endl;
    }else{
        cout<<endl<<endl<<endl;
        cout<<"The answer is not sorted"<<endl;
        cout<<endl<<endl<<endl;
    }
    return 0;
}