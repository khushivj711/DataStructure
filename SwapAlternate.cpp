#include <iostream>
using namespace std;

void SwapAlternate(int arr[] ,int size){

    for(int i = 0 ;i<size ; i=i+2){
        if((i+1) < size){
            swap(arr[i] , arr[i+1]);
        }
    }
}

void printArray(int arr[] , int size){

    for(int i = 0 ;i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[5] = {1,3,2,7,11};

    SwapAlternate(arr , 5);
    printArray(arr , 5);

    return 0;
}