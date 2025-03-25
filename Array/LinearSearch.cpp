#include <iostream> 
using namespace std;

// int main() {
//     int arr[] = {1, 3, 5, 7, 8};
//     int size = 5;
//     int key;
//     bool found = false;
//     cout << "Enter the key to find ";
//     cin >> key;

//     for (int i = 0; i < size; i++) {
//         if (arr[i] == key) {
//             cout << "Key is present";
//             found = true;
//             break;  
//         }
//     }
    
//     if (!found) {
//         cout << "Key is absent";
//     }

//     return 0;
// }

bool find(int arr[],int size,int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return true;
        }
       
    }
    return false;

}

int main(){
    int arr[] = {1, 3, 5, 7, 8};
    int size = 5;
    int key;
    cout << "Enter the value of key ";
    cin >> key;

    if(find(arr,size,key)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found";
    }
}