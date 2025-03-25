#include <iostream>
using namespace std;

bool findKey(int arr[3][4], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]==key)
            return true;
        }
    }
    return false;
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
    int key = 1;
    if(findKey(arr,3,4,key)){
        cout << "true";
    }
    else{
        cout << "false";
    }
}