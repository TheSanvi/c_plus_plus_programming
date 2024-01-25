#include<iostream>
using namespace std;

bool findKey(int arr[][3],int rows ,int cols, int key ){
    for (int i=0; i<rows; i++){
        for(int j=0; j<cols; j++ ){
            if(arr[i][j] == key)
            return true;
        }
    }
    return false;
}


void printRowWiseSum(int arr[][3],int rows, int cols){
    cout<<"printin row wise sum "<< endl;
    for(int i=0; i<rows; i++){
        int sum= 0;
        for(int j =0; j<cols; j++){
            sum = sum +arr[i][j];
        }
        cout<<sum<<endl;
    }
}


int main(){
  int arr[3][3];
  int rows = 3;
  int cols = 3;

//   input

// row wise input

for (int i =0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>arr[i][j];
    }
}
cout<<"printing row wise"<<endl;
for (int i =0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout<<arr[i][j]<< " ";
    }
    cout<<endl;
}

// printRowWiseSum(arr,rows,cols);

int key =9;
cout<<findKey(arr,3,3,key);

return 0;
  
}