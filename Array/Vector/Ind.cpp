#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // create vector
    vector<int> arr;
    // int ans = (sizeof(arr)/sizeof(char));
    // cout << ans << endl;

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

        // remove / delete
        arr.pop_back();
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        vector<int> brr(10);
        cout << "size of b is " << brr.size() << endl;
        cout << "capacity of b is " << brr.capacity();

        int n;
        cout << "Enter the value of n ";
        cin >> n;

        vector<int> crr(n, -101);
        for(int i=0; i<crr.size(); i++){
            cout << crr[i] << " ";
        }

        cout << "printing drr" << endl;
        vector<int> drr{10, 20, 30, 40};
        for(int i=0; i<drr.size(); i++){
            cout << drr[i] << " ";
        }
        cout << endl;

        cout << "vectr drr is empty or not " << drr.empty();



        return 0;
    }