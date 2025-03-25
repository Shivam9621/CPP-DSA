#include <iostream>
using namespace std;

void printRowWiseSum(int arr[][4], int rows, int cols){
    cout << "printing row wise sum " << endl;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum = sum + arr[i][j];
        }
        cout << sum << endl;  
    }
}
void printColumnWiseSum(int arr[][4], int rows,  int cols){
    cout << "Printing column wise sum " << endl;
     for(int j=0; j<4; j++){
        int sum = 0;
        for(int i=0; i<3; i++){
            sum = sum + arr[i][j];
        }
        cout << sum << endl;  
    }
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
    printRowWiseSum(arr, rows, cols);
    printColumnWiseSum(arr, rows, cols);


    return 0;
}