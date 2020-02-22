#include<iostream>
using namespace std;
void printArray(int[], int);

void printArray(int arr[], int count){

    for (int i = 0; i < count; i++)
    {

        cout<< arr[i]<< " ";
        /* code */
    }
    
}




int main(){
    int arr[] = {2,7,4,8,5,6,2,6,4};
     int N= sizeof(arr)/sizeof(*arr);
     for(int i = 0; i< N-1; i++){
         int loc = i;
         for(int j = i+1; j< N; j++){
             if(arr[j]< arr[loc]) {
                 loc = j;
             }
         }
         int temp =  arr[i];
         arr[i]= arr[loc];
         arr[loc] = temp;
     }
     printArray(arr, N);
    return 0;
}