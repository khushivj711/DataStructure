#include <iostream>
using namespace std;

int ReverseArray(int arr[] , int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[] , int size){

    for(int i = 0 ;i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = { 2, 6,3,9,4};

    ReverseArray(arr,6);
    ReverseArray(brr , 5) ;

    printArray(arr,6);
    printArray(brr,5);

    return 0;
}