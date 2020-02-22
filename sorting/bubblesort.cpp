#include<iostream>
using namespace std;
void printArray(int[], int);

void printArray(int arr[], int count){

    for (int i = 0; i < count; i++)
    {

        cout<< arr[i]<< " ";
        /* code */
    }
    cout<<"\n";
}




int main(){
    int arr[] = {2,7,4,8,5,6,2,6,4};
     int N= sizeof(arr)/sizeof(*arr);
     for(int i = 0; i< N-1; i++){
         for(int j = 0; j< N-i-1; j++){
             if(arr[j]> arr[j+1]) {
                int temp =  arr[j];
                arr[j]= arr[j+1];
                   arr[j+1] = temp;
             }
         }
     }
     printArray(arr, N);
    return 0;
}