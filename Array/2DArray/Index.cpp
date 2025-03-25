#include <iostream>
using namespace std;

int main() {
    // Declare an 2D array
    // int arr[3][3];

    // // Initialisation
    // int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // cout << "Declared and Initialised successfully" << endl;
    // cout << brr[2][2] << endl;

    // // Row-wise print
    // cout << "Printing row wise" << endl;
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout << brr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "Printing column wise" << endl;
    // for(int j=0; j<3; j++){
    //     for(int i=0; i<3; i++){
    //         cout << brr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // row wise input
    int crr[3][4];
    int rows = 3;
    int cols = 4;
    cout << "Emter the values " << endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << "Enter the value at index " << i << "," << j ;
            cout << endl;
            cin >> crr[i][j];
        }
        cout << endl;
    }

    cout << "Printing the values " << endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }

}  
