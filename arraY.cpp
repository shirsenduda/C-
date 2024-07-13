#include <iostream>
using namespace std;

int main() {
    int data[][2]={{1,20},{2,40},{3,30},{4,50}};
    for(int row = 0 ; row<4 ; row++){
        for(int column = 0 ; column<2 ; column++){
            cout<<data[row][column]<<" " ;
        }
        cout<<endl;
    }
    return 0 ;
}
