#include<iostream>
using namespace std;


// created function
void printname(){
    int n;
    
    cout<<"Enter the value of n";
    cin>> n;

    for(int i=0; i<n; i++){
        cout<<"babbar"<<endl;
    }
}


// function call
int main(){
    printname();
}