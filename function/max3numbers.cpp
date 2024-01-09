#include<iostream>
using namespace std;


int max(int a ,int b,int c);
int main(){
    int a;
    int b;
    int c;
    cin >>a;
    cin >>b;
    cin >>c;

    int find = max(a,b,c);

    cout <<find<<endl;
}

int max(int a ,int b,int c){

    if(a>b&&a>>c){
    return a;
    }

    else if(b>a && b>c){
    return b;
    }

    else if(c>a && c>b){
    return c;
    }

    }
    


