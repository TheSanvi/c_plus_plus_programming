#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cin >>a;
    cin >>b;

    int sum = add(a,b);

    cout <<sum<<endl;
}

int add(int a ,int b){
int result = a+b;
return result;
}