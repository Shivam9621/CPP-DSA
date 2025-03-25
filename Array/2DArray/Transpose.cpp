// 

#include <iostream>
using namespace std;

void transpose(int transposeArr[3][3], int arr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposeArr[j][i] = arr[i][j];
        }
    }
}

void printArray(int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    cout << "Enter the values:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Original Array:" << endl;
    printArray(arr, rows, cols);

    int transposeArr[3][3];
    transpose(transposeArr, arr, rows, cols);

    cout << "After Transpose:" << endl;
    printArray(transposeArr, rows, cols);

    return 0;
}
