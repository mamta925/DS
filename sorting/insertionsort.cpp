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
     for(int i = 1; i< N; i++){
         int j =i-1;
         int val = arr[i];
            while(j>=0 && val < arr[j]){
              arr[j+1] = arr[j];  
             j--;
              }
            arr[j+1]=val;
     }
     printArray(arr, N);
    return 0;
}