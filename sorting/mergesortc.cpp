#include<iostream>
using namespace std;
void printArray(int[], int);
int* megeSort(int[], int, int);
void megeSort(int[], int, int, int);

void printArray(int arr[], int count){

    for (int i = 0; i < count; i++)
    {

        cout<< arr[i]<< " ";
        /* code */
    }
    cout<<"\n";
}

 void merge(int arr[], int Lbeg, int Lend, int Rbeg, int Rend){

     int temp[20],i,q1,q2;
     for(i = 0,q1=Lbeg,q2=Rbeg; q1<=Lend&&q2<=Rend; i++){
         temp[i] = arr[q1]<arr[q2]?arr[q1++]: arr[q2++];
     }
     for(; q1<=Lend; i++){
         temp[i] = arr[q1++];
     }
     for(; q2<=Rend; i++){
         temp[i]= arr[q2++];
     }

     for(i=0, q1=Lbeg; q1<=Rend; i++, q1++){
         arr[q1]=temp[i];
     }


}


int count = 0;
int* megeSort(int arr[], int L, int H){
   int M;
    if(L<H){
        M =(L+H)/2;
        megeSort(arr, L, M);
        megeSort(arr, M+1, H);
        merge(arr, L, M, M+1, H);
    }
    return arr;
}



int main(){
    int arr[] = {2,7,4,8,5,6,2,6,4};
     int N= sizeof(arr)/sizeof(*arr);
    int *ar = megeSort(arr, 0, N);
     printArray(ar, N);
    return 0;
}