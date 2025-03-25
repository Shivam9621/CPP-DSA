#include<iostream>
using namespace std;

bool checkPrime(int n){
    int i = 2;
    for(i; i<n; i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    bool isPrime = checkPrime(n);
    if(isPrime){
        cout << "Not a Prime";
    }
    else{
        cout << "Prime";
    }
    }
