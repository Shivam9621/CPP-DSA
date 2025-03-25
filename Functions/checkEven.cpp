#include<iostream>
using namespace std;

bool checkEven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    bool isEven = checkEven(n);

    if(isEven){
        cout << n << " is a even number";
    }
    else {
        cout << n << " is a odd number";
    }

    return 0;

}