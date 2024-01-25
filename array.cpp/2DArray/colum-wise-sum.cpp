#include<iostream>
using namespace std;


void printColWiseSum(int arr[][3],int rows, int cols){
    cout<<"printin col wise sum "<< endl;
    for(int j=0; j<cols; j++){
        int sum= 0;
        for(int i =0; i<rows; i++){
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

// col wise input

for (int i =0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>arr[j][i];
    }
}
cout<<"printing col wise"<<endl;
for (int i =0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout<<arr[i][j]<< " ";
    }
    cout<<endl;
}

printColWiseSum(arr,rows,cols);

return 0;
  
}