#include<iostream>
using namespace std;
int binary_search(int[], int, int);

int binary_search(int arr[], int N, int key){
int L =0 , H= N-1, M;
   while(L<=H){
        M= (L+H)/2;
        if(arr[M] == key){
          return M+1;
        } else if(key> arr[M]){
           L= M+1;

        } else if(key< arr[M]) {
            H = M-1;
        }

   }
   return -1;

}

int main(){
    int arr[] = {1, 12,13,34,45,56,78,89,90};
    int key = 0;
    int N= sizeof(arr)/sizeof(*arr);
     cin>>key;
    int pos = binary_search(arr, N, key);
    cout<< pos <<"\n";
    return 0;
}