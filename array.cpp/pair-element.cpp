#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int>arr{10,20,40,60,70};

    for (int i=0;i<arr.size(); i++){
        cout<<"WE are at element :"<<arr[i]<<endl;
        int element =arr[i];

        for (int j=i+1; j<arr.size(); j++){
            cout<<"pair"<<element<<"with"<<arr[j]<<endl;
        }
    }

return 0;

}

