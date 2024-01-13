#include<iostream>
using namespace std;

int main(){
    int rowcount;
    int colcount;

    cin >>rowcount;
    cin>> colcount;

    for(int row=0; row<rowcount; row = row+=1){
        for(int col=0; col<colcount; col+=1)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}