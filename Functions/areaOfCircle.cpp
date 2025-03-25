#include<iostream>
using namespace std;

int areaOfCircle(int r){
    int area = 3.14*r*r;
    return area;
}

int main(){
    int r; 
    cout << "Enter the value of radius: ";
    cin >> r;
    int area = areaOfCircle(r);
    cout << "The area of circle is " << area;

    return 0;

}