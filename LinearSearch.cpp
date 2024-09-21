#include <iostream>
using namespace std;

bool LinearSearch(int arr[] , int size , int key){

    for(int i = 0 ; i<size ; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};

    //whether 1 is present in it or not?
    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;

    if(LinearSearch(arr , 10 , key)){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not Present"<<endl;
    }

    return 0;
}