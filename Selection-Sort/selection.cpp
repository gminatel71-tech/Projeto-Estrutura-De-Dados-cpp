#include <iostream>

using namespace std;
int main() {
    int arr[10], i, j, min, n, temp;

    cout << "Inform what is array's length = ";
    cin >> n;

    for(i = 0; i < n; i++) {
        cout << "Inform values position [" << i << "] = ";
        cin >> arr[i];
    }
    cout << endl;
    
    cout << "Unsorted Array: ";
    for(i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << "Sorted Array: ";
    for(i = 0; i < n; i++) {
        min = i;

        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        if(min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        
        cout << arr[i] << "  ";
    }

    return 0;
}