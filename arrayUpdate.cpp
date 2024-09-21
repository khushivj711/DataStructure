#include <iostream>
using namespace std;

void update(int arr[] , int size){
    cout<<"Inside the function"<<endl;

    arr[0] = 50;
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"Going back to function"<<endl;
}

int SumArray(int arr[] , int size){
    int sum = 0;
    for(int i = 0 ; i<size ; i++){
       sum = sum + arr[i];
    }
return sum;
}

int main(){
    int arr[3] = {1,2,3} ;

    update(arr , 3);

    cout<<SumArray(arr, 3)<<endl;

    for(int i = 0 ; i<3 ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}