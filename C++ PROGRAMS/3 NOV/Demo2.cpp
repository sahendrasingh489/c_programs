// program showing the concept of array

#include<iostream>
using namespace std;

int getMaximum(int arr[]){
    int size;
    cout<<"Enter array size : ";
    cin>>size;

    cout<<"Enter array elements : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i])
            max = arr[i];
    }
    return max;
}
int main(){
   int arr[50];
   cout<<"Maximum element : "<<getMaximum(arr)<<endl; 
}