#include<iostream>
using namespace std;

int main(){
    int arr[10000];

    int n;

    cin>>n;

    cout<<"enter the input values in array"<<endl;

    for(int i=0; i<n; i++){
        cin >>arr[i];
    }

    cout<<"printing the values in array"<<endl;

    for(int i=0; i<n; i++){
        cout<<2*arr[i]<<" "; 
    }
}