#include<iostream>
using namespace std;

int main(){
    int arr[10];

    cout<<"enter the input values in array"<<endl;

    for(int i=0; i<10; i++){
        cin >>arr[i];
    }

    cout<<"printing the values in array"<<endl;

    for(int i=0; i<10; i++){
        cout<< arr[i]<<" "; 
    }
}