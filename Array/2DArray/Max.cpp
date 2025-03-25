#include <iostream>
#include <limits.h>
using namespace std;

int getMax(int arr[3][4], int rows, int cols){
    int maxi = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]>maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;

}


int main(){
    int arr[3][4];
    int rows = 3;
    int cols = 4;
    cout << "Emter the values " << endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << "Enter the value at index " << i << "," << j ;
            cout << endl;
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << "Printing the values " << endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << getMax(arr,3,4);
}
