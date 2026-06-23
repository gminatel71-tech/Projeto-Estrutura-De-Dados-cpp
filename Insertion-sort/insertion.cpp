#include <iostream>

using namespace std;
int main() {
    int arr[10], i, j, n, key;

    cout << "Inform what is array's length = ";
    cin >> n;

    for(i = 0; i < n; i++) {
        cout << "Inform values position [" << i << "] = ";
        cin >> arr[i];
    }
    cout << endl;
    
    cout << "Sorted Array: ";
    for(i = 1; i < n; i++) { 
        key = arr[i]; // get values in current position
        j = i - 1; // j considers the value that comes before the current

        while ((j >= 0) && (key < arr[j])) { // loop goes through the array until find a place for key (arr[i]) have to be
            arr[j + 1] = arr[j]; // Value in front receives the current value 
            j = j - 1; // decreased the position until -1 (that says like: 'loop is empty, stop it')
        }
        arr[j + 1] = key; // value in front of is the new key
        
    }
    for(i = 0; i < n; i++) {
        cout << arr[i] << "   ";
    }

    cout << endl;
    cout << "Binary Search: " << endl;
    int userValue;
    
    cout << "Enter an integer: ";
    cin >> userValue;

    int init, end, mid;
    bool finded;
    init = 0;
    end = n - 1;
    finded = false;
    i = 1;
    
    while((init <= end) && (finded == false)) {
        mid = (init + end)/2;

        if(userValue < arr[mid]) {
            end = mid - 1; //Program will search in the left side
        } else {
            if(userValue > arr[mid]) {
                init = mid + 1; //Program will search in the right side
            } else {
                finded = true;
            }
        }
    }
    if(finded == true) {
        cout << "Value = " << userValue << endl;
        cout << "Finded in the position: " << mid;
    } else {
        cout << "Value = " << userValue << "; couldn't be finded" << endl;
    }
    
    return 0;
}