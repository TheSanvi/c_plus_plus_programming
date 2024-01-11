#include<iostream>
using namespace std;

float circlearea(float radius){
    float area = 3.14 *radius *radius;
    return area;
}


int main(){
    float radius;
    cin>>radius;
    float area = circlearea(radius);
    cout<<"area of a circle is"<<area<<endl;

}