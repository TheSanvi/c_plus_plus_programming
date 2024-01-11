#include<iostream>
using namespace std;

int evenodd( int n){
    if(n%2 == 0){
    cout<<"even";
    }
    else 
    cout<<"odd";

}


int main(){
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;

    int check = evenodd(n);
    // cout<<"number is"<<check<<endl;

}