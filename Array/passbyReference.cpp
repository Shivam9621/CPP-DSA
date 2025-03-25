#include<iostream>
using namespace std;
void printArray(int size, int arr[]){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void inc(int size, int arr[]){
    arr[0] = arr[0] + 10;

    printArray(size,arr);



}

int main(){
    int arr[] = {5,6};
    int size = 2;
    inc(size,arr);

    printArray(size,arr);
}