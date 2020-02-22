#include<iostream>
using namespace std;

int main(){
int arr[] = {1,2,3,4,5,6,7};
int length = sizeof(arr)/sizeof(*arr);
for (int i = 0; i<length; i++){
    cout<<" "<< arr[i];
}
 cout<<"\n ";
    return 0;
}