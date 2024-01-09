#include<iostream>
using namespace std;

int printcounting(int n){

    for( int i=1; i<=n; i++){
        cout<<i<<endl;
    }
}

int main (){
int n;

cout <<"enter the value of n"<< endl;
cin>>n;

printcounting(n);
return 0;
}




