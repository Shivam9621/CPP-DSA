#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>> arr) {
    int rows = arr.size();
    int cols = arr[0].size();
    
    for (int col = 0; col < cols; col++) {
        if (col % 2 == 0) {
            // Print top to bottom
            for (int row = 0; row < rows; row++) {
                cout << arr[row][col] << " ";
            }
        } else {
            // Print bottom to top
            for (int row = rows - 1; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    vector<vector<int>> arr{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    wavePrintMatrix(arr);
    return 0;
}
