#include<iostream>
using namespace std;

char getgrade(int marks){
    if(marks>=90)
    return 'A';
    else if(marks>=80)
    return 'B';
    else if(marks>=60)
    return 'C';
    else
    return 'D';


}

int main(){


    int marks;
    cout<<"enter the marks"<<endl;
    cin >>marks;

    char finalgrade = getgrade(marks);
    cout<<finalgrade<<endl;

    return 0;


}