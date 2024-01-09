#include<iostream>
using namespace std;

// Function prototype
void printNum(int a);

int main(){
    int a = 1;
    printNum(a);
    cout << a << endl;

    return 0;
}

void printNum(int a)
{
    cout << a++ <<endl;
}
