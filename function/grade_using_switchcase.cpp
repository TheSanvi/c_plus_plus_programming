#include<iostream>
using namespace std;

char getgrade(int marks){
    switch(marks){
        case 9 : return 'A';break;
        case 8 : return 'B';break;
        case 7 : return 'C';break;
        case 6 : return 'D';break;
        default: return 'E';
       
    }

}

int main(){


    int marks;
    cout<<"enter the marks"<<endl;
    cin >>marks;

    char finalgrade = getgrade(marks);
    cout<<finalgrade<<endl;

    return 0;


}