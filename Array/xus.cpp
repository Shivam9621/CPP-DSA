#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int size;
    cin >> size;
    
    int arr[size]; // This works in modern C++ (but consider using std::vector for dynamic size)
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int start = 0;
    int end = size - 1;  // Use size-1 because array indexing is 0-based

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
