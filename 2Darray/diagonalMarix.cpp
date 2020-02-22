#include<iostream>
using namespace std;

void printArray(int arr[][4], int row, int col){

     for (int i = 0; i < row; i++) 
    { 
        for (int j = 0; j < col; j++) 
        { 
            cout << "Element at x[" << i 
                 << "][" << j << "]: "; 
            cout << arr[i][j]<<endl; 
        } 
    } 
}
void printDig(int arr[][4], int row, int col){

     for (int i = 0; i < row; i++) 
    { 
        for (int j = 0; j < col; j++) 
        { 
            if(i<=j){
            cout << arr[i][j]<<" "; 
            } else {
                cout<< " ";
            }
        } 
        cout<< "\n ";
    } 
}

int main (){
int x[3][4] = {{0,6,8,3}, {4,9,6,7}, {8,9,90,11}};
printDig(x, 3,4);

return 0;

}