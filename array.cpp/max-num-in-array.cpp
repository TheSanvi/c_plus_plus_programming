#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[]= {8,7,6,5,4,32,5,78,56,35,1,9,5,34};
    int size =14;
    int maxi = INT_MIN;
     for(int i=0; i<size; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }

     }
     cout<<"maximum number is "<<maxi <<endl;

     return 0;
}