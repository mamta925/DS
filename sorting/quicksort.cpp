#include<iostream>
using namespace std;
void printArray(int[], int);
int* quickSort(int[], int, int);

void printArray(int arr[], int count){

    for (int i = 0; i < count; i++)
    {

        cout<< arr[i]<< " ";
    }
    cout<<"\n";
}


int count = 0;
int* quickSort(int A[], int LB, int UB){
   int pivot = A[(LB+UB)/2],  L =LB, U = UB, temp;
   
   while (L<=U)
   {
     while (A[L]<pivot)
       L++;
     while (A[U]>pivot)
         U--;

         if(L<=U){

             temp = A[L];
             A[L] = A[U];
             A[U] =temp;
             L++, U--;
         } 
   }
   if(LB<U){
       quickSort(A, LB, U);
   }
   if(UB>L){
       quickSort(A, L, UB);
   }
   return A;
   }



int main(){
    int arr[] = {2,7,4,8,5,6,2,6,4};
     int N= sizeof(arr)/sizeof(*arr);
    int *ar = quickSort(arr, 0, N);
     printArray(ar, N);
    return 0;
}