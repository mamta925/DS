#include<iostream>
using namespace std;
#define SZ 10;

int isFull(int T){
    if(T== 9){
        return 1;
    }
    return 0;
}

int isEmpty(int T){
    if(T == -1){
        return 1;
    }
    return 0;
}

void push(int arr[], int *T, int data){
   if(isFull(*T)){
       cout<<"\n overflow";
       exit(1);
   } else
   {
       *T = *T+1;
       arr[*T] = data;
   }
   

}

int pop(int arr[], int *T){
    int data;
   if(isEmpty(*T)){
       cout<<"\n underflow";
       exit(1);
   } else
   {
        data = arr[*T];
        *T= *T-1;
       return data;
      
   }
   

}

int peek(int arr[], int T){
    int data;
   if(isEmpty(T)){
       cout<<"\n underflow";
       exit(1);
   } else
   {
        data = arr[T];
       return data;
      
   }
   

}

int main (){

int stack[10], top=-1;
int n, r;
while (1)
{
    cout<<"\n press 1 push";
    cout<<"\n press 2 pop";
     cout<<"\n press 3 peek";
      cout<<"\n press 4 exit";
       cout<<"\n Enter your choice";
       cin>>r;

       switch (r)
       {
       case 1:
           cout<<"\n Enter the number\n";
           cin>>n;
           push(stack, &top, n);
           break;
            case 2:
             n = pop(stack, &top);
             cout<<"\n Deleted Element "<<n;
           break;
            case 3:
               n = peek(stack, top);
                 cout<<"\n top most data "<<n;
           break;
            case 4:
            exit(0);
           
           break;
       
       default:
        exit(0);
           break;
       }

}



return 0;

}