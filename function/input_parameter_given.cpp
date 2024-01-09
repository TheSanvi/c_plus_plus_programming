#include<iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;

    cout<<max(a,b);
    return 0;

}

int max(int a ,int b)
{
    if(a>b)
    return a;
    else 
    return b;
}